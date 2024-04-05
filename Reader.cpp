#include <iostream>
#include <string>
#include <locale>

using namespace std;

class Reader {
private:
    string fullName;
    int cardNumber;
    string faculty;
    string birthDate;
    string phone;

public:
    Reader(string name, int card, string fac, string birth, string ph) {
        fullName = name;
        cardNumber = card;
        faculty = fac;
        birthDate = birth;
        phone = ph;
    }

    void takeBook(int count) {
        cout << fullName << " ���� " << count << " �����." << endl;
    }

    void returnBook(int count) {
        cout << fullName << " ������ " << count << " �����." << endl;
    }
};

class Book {
private:
    string author;
    string title;
    int year;

public:
    void setAuthor(string book_author) {
        author = book_author;
    }

    void setTitle(string book_title) {
        title = book_title;
    }

    void setYear(int book_year) {
        year = book_year;
    }

    string getAuthor() {
        return author;
    }

    string getTitle() {
        return title;
    }

    int getYear() {
        return year;
    }
};

int main() {
    setlocale(LC_ALL, "RUS");

    const int numReaders = 2;
    Reader readers[numReaders] = {
        Reader("������ ���� ��������", 123456, "���������� �����������", "01.01.2004", "+79601234567"),
        Reader("������ ���� ��������", 654321, "������������", "15.05.2003", "+79105876543")
    };

    for (int i = 0; i < numReaders; ++i) {
        readers[i].takeBook(3);
        readers[i].returnBook(2);
    }

    return 0;
}
