#include <iostream>
#include <string>
#include <locale>
using namespace std;

class RetailItem {
private:
    string description;
    int quantity_in_stock;
    double price;
public:

    RetailItem(string desc, int quantity, double pr) {
        description = desc;
        quantity_in_stock = quantity;
        price = pr;
    }

    void display() {
        cout << "�������� ������: " << description << endl;
        cout << "���������� ������ �� ������: " << quantity_in_stock << endl;
        cout << "����: " << price << endl;
        cout << endl;
    }
};

int main() {
    
    setlocale(LC_ALL, "RUS");
    RetailItem item1("������", 12, 59.95);
    RetailItem item2("������������ ������", 40, 34.95);
    RetailItem item3("�������", 20, 24.95);

    cout << "����� 1:" << endl;
    item1.display();

    cout << "����� 2:" << endl;
    item2.display();

    cout << "����� 3:" << endl;
    item3.display();

    return 0;
}
