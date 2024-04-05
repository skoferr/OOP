#include <iostream>
#include <string>
#include <locale>
using namespace std;

class Employee {
private:
    string name;
    int id_number;
    string department;
    string position;
public:

    Employee(string emp_name, int emp_id, string emp_department, string emp_position) {
        name = emp_name;
        id_number = emp_id;
        department = emp_department;
        position = emp_position;
    }

    void display() {
        cout << "���: " << name << endl;
        cout << "����������������� �����: " << id_number << endl;
        cout << "�����: " << department << endl;
        cout << "���������: " << position << endl;
        cout << endl;
    }
};

int main() {

    setlocale(LC_ALL, "RUS");
    Employee employee1("������ ������", 47899, "�����������", "����-���������");
    Employee employee2("���� ������", 39119, "��", "�����������");
    Employee employee3("���� �������", 81774, "����������������", "�������");

    cout << "��������� 1:" << endl;
    employee1.display();

    cout << "��������� 2:" << endl;
    employee2.display();

    cout << "��������� 3:" << endl;
    employee3.display();

    return 0;
}
