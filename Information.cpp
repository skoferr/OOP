#include <iostream>
#include <string>
#include <locale>
using namespace std;

class Information {
private:
    string name;
    string address;
    int age;
    string phone_number;
public:

    void set_name(string n) {
        name = n;
    }

    void set_address(string addr) {
        address = addr;
    }

    void set_age(int a) {
        age = a;
    }

    void set_phone_number(string phone) {
        phone_number = phone;
    }

    string get_name() {
        return name;
    }

    string get_address() {
        return address;
    }

    int get_age() {
        return age;
    }

    string get_phone_number() {
        return phone_number;
    }
};

int main() {
    setlocale(LC_ALL, "RUS");
    Information person1, person2, person3;

    person1.set_name("Иванов Кирилл");
    person1.set_address("ул. Германа Лопатина 14");
    person1.set_age(19);
    person1.set_phone_number("+79306825283");

    person2.set_name("Иванова Людмила");
    person2.set_address("ул. Германа Лопатина 14");
    person2.set_age(40);
    person2.set_phone_number("+79306825281");

    person3.set_name("Иванов Алексей");
    person3.set_address("ул. Германа Лопатина 14");
    person3.set_age(43);
    person3.set_phone_number("+79100572071");

    cout << "Первый человек: " << endl;
    cout << "Имя: " << person1.get_name() << endl;
    cout << "Адрес: " << person1.get_address() << endl;
    cout << "Возраст: " << person1.get_age() << endl;
    cout << "Телефонный номер: " << person1.get_phone_number() << endl;

    cout << endl;

    cout << "Второй человек: " << endl;
    cout << "Имя: " << person2.get_name() << endl;
    cout << "Адрес: " << person2.get_address() << endl;
    cout << "Возраст: " << person2.get_age() << endl;
    cout << "Телефонный номер: " << person2.get_phone_number() << endl;

    cout << endl;

    cout << "Третий человек: " << endl;
    cout << "Имя: " << person3.get_name() << endl;
    cout << "Адрес: " << person3.get_address() << endl;
    cout << "Возраст: " << person3.get_age() << endl;
    cout << "Телефонный номер: " << person3.get_phone_number() << endl;

    return 0;
}
