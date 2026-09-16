#include <iostream>
using namespace std;

class product{
private:
    int Id;
    string name;
    float price;

public:
    product(int id, string n, float p) {
        Id = id;
        name = n;
        price = p;
    }

    product comparePrice(const product &p) {
        if (price > p.price)
            return *this;
        else
            return p;
    }

    void display() {
        cout << "Product ID: "<< Id << endl;
        cout << "Product Name: "<< name << endl;
        cout << "Price: "<< price << endl;
    }
};

int main() {
    product p1(101, "Laptop", 55000);
    product p2(102, "Smartphone", 40000);

    product higher = p1.comparePrice(p2);

    cout << "Product with Higher Price:" << endl;
    higher.display();

    return 0;
}