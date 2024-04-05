#include <iostream>
#include <string>
#include <locale>
using namespace std;

class Phone {
private:
    string number;
    string model;
    double weight;

public:

    Phone(string num, string mod, double wt) {
        number = num;
        model = mod;
        weight = wt;
    }

    Phone(string num, string mod) {
        number = num;
        model = mod;
        weight = 0.0;
    }

    Phone() {
        number = "";
        model = "";
        weight = 0.0;
    }

    void receiveCall(string callerName) {
        cout << "Входящий звонок от " << callerName << endl;
    }

    string getNumber() {
        return number;
    }
};

int main() {
    
    setlocale(LC_ALL, "RUS");
    Phone phone1("+79306825281", "Xiaomi Note 11T Pro", 0.2);
    Phone phone2("+79100572071", "Samsung Galaxy S21");
    Phone phone3;

    phone1.receiveCall("Мама");
    cout << "Номер телефона: " << phone1.getNumber() << endl;

    phone2.receiveCall("Папа");
    cout << "Номер телефона: " << phone2.getNumber() << endl;

    phone3.receiveCall("Бабушка");
    cout << "Номер телефона: " << phone3.getNumber() << endl;

    return 0;
}
