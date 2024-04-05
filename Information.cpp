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

    person1.set_name("������ ������");
    person1.set_address("��. ������� �������� 14");
    person1.set_age(19);
    person1.set_phone_number("+79306825283");

    person2.set_name("������� �������");
    person2.set_address("��. ������� �������� 14");
    person2.set_age(40);
    person2.set_phone_number("+79306825281");

    person3.set_name("������ �������");
    person3.set_address("��. ������� �������� 14");
    person3.set_age(43);
    person3.set_phone_number("+79100572071");

    cout << "������ �������: " << endl;
    cout << "���: " << person1.get_name() << endl;
    cout << "�����: " << person1.get_address() << endl;
    cout << "�������: " << person1.get_age() << endl;
    cout << "���������� �����: " << person1.get_phone_number() << endl;

    cout << endl;

    cout << "������ �������: " << endl;
    cout << "���: " << person2.get_name() << endl;
    cout << "�����: " << person2.get_address() << endl;
    cout << "�������: " << person2.get_age() << endl;
    cout << "���������� �����: " << person2.get_phone_number() << endl;

    cout << endl;

    cout << "������ �������: " << endl;
    cout << "���: " << person3.get_name() << endl;
    cout << "�����: " << person3.get_address() << endl;
    cout << "�������: " << person3.get_age() << endl;
    cout << "���������� �����: " << person3.get_phone_number() << endl;

    return 0;
}
