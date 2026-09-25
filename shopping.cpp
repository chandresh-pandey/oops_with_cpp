#include<iostream>
using namespace std;
class product{
    int productId;
    string productName;
    float productPrice;
    public:
    product(int id, string name, float price){
        productId=id;
        productName=name;
        productPrice=price;}
        double calculatePrice() {
            return productPrice;
        }
        double calculatePrice(float discount){
            return productprice-(discount*productprice/100);
        }
    }
}