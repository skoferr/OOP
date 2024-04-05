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
        cout << "Имя: " << name << endl;
        cout << "Идентификационный номер: " << id_number << endl;
        cout << "Отдел: " << department << endl;
        cout << "Должность: " << position << endl;
        cout << endl;
    }
};

int main() {

    setlocale(LC_ALL, "RUS");
    Employee employee1("Сьюзан Мейерс", 47899, "Бухгалтерия", "Вице-президент");
    Employee employee2("Марк Джоунс", 39119, "ИТ", "Программист");
    Employee employee3("Джой Роджерс", 81774, "Производственный", "Инженер");

    cout << "Сотрудник 1:" << endl;
    employee1.display();

    cout << "Сотрудник 2:" << endl;
    employee2.display();

    cout << "Сотрудник 3:" << endl;
    employee3.display();

    return 0;
}
