#include <iostream>
#include <string>
#include <locale>
using namespace std;

class Pet {
private:
    string name;
    string animal_type;
    int age;
public:
    void set_name(string pet_name) {
        name = pet_name;
    }
    string get_name() {
        return name;
    }
    void set_animal_type(string type) {
        animal_type = type;
    }
    string get_animal_type() {
        return animal_type;
    }
    void set_age(int pet_age) {
        age = pet_age;
    }
    int get_age() {
        return age;
    }
};

int main() {
    setlocale(LC_ALL, "RUS");
    Pet my_pet;
    my_pet.set_name("Барсик");
    my_pet.set_animal_type("Кот");
    my_pet.set_age(5);

    cout << my_pet.get_name() << " " << my_pet.get_age() << " лет " << my_pet.get_animal_type() << endl;

    return 0;
}
