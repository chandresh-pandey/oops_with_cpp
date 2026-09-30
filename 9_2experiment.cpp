#include <iostream>
using namespace std;

class ServiceRecord
{
public:
    string serviceName;
    float cost;

    void input()
    {
        cout << "Enter Service Name: ";
        cin >> serviceName;

        cout << "Enter Service Cost: ";
        cin >> cost;
    }

    void display()
    {
        cout << serviceName << " - Rs. " << cost << endl;
    }
};

class Vehicle
{
public:
    string vehicleNumber;
    string ownerName;
    int serviceCount;
    ServiceRecord *services;

    // Constructor
    Vehicle(int n)
    {
        serviceCount = n;
        services = new ServiceRecord[n];
    }

    void input()
    {
        cout << "Enter Vehicle Number: ";
        cin >> vehicleNumber;

        cout << "Enter Owner Name: ";
        cin >> ownerName;

        for(int i = 0; i < serviceCount; i++)
        {
            cout << "\nService " << i + 1 << endl;
            services[i].input();
        }
    }

    void display()
    {
        cout << "\nVehicle Number: " << vehicleNumber << endl;
        cout << "Owner Name: " << ownerName << endl;

        float total = 0;

        cout << "\nServices:\n";

        for(int i = 0; i < serviceCount; i++)
        {
            services[i].display();
            total = total + services[i].cost;
        }

        cout << "Total Bill = Rs. " << total << endl;
    }

    ~Vehicle()
    {
        delete[] services;
    }
};

int main()
{
    int n;

    cout << "Enter number of services: ";
    cin >> n;

    Vehicle *v = new Vehicle(n);

    v->input();
    v->display();

    delete v;

    return 0;
}