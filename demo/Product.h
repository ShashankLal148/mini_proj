#ifndef PRODUCT_H
#define PRODUCT_H
#include <bits/stdc++.h>
using namespace std;
class Product
{
private:
    string Name;
    string productID;
    float price;
    int quantity;

public:
    Product();
    Product(string, string, int, int);
    string getName();
    int operator=(Product a);
    string getProductID();
    float getPrice();
    int getQuantity();
};
#endif