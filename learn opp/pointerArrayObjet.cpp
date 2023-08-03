#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

class Shop {
private:
    string itemName;
    int itemId;
    float itemPrice;

public:
    void setItem(string n, int i, float p) {
        itemName = n;
        itemId = i;
        itemPrice = p;
    }

    string getName() {
        return itemName;
    }

    int getId() {
        return itemId;
    }

    float getPrice() {
        return itemPrice;
    }
};

int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;
    //int* p = new int[size];
    Shop* ptr = new Shop[size];

    string name;
    int id;
    float price;

    for (int i = 0; i < size; i++) {
        cout << "Enter the name, id, and price: ";
        cin >> name >> id >> price;
        ptr[i].setItem(name, id, price);
    }

    for (int i = 0; i < size; i++) {
        cout << "Item " << i + 1 << ":" << endl;
        cout << "Name: " << ptr[i].getName() << endl;
        cout << "ID: " << ptr[i].getId() << endl;
        cout << "Price: " << ptr[i].getPrice() << endl;
        cout << endl;
    }

    delete[] ptr;
    return 0;
}
