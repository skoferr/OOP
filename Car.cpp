#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    int year_model;
    string manufacturer;
    int speed;
public:
    Car(string model, int year) {
        year_model = year;
        manufacturer = model;
        speed = 0;
    }

    void accelerate() {
        speed += 5;
    }

    void brake() {
        speed -= 5;
        if (speed < 0) {
            speed = 0;
        }
    }

    int get_speed() {
        return speed;
    }

    string get_model() {
        return manufacturer;
    }

    int get_year() {
        return year_model;
    }
};

int main() {
    Car my_car("BMW", 2021 );

    cout << my_car.get_model() << " " << my_car.get_year() << endl;

    for (int i = 0; i < 5; ++i) {
        my_car.accelerate();
    }

    cout << "Current speed after acceleration: " << my_car.get_speed() << endl;

    for (int i = 0; i < 3; ++i) {
        my_car.brake();
    }

    cout << "Current speed after braking: " << my_car.get_speed() << endl;

    return 0;
}
