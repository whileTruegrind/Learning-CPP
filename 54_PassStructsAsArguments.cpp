#include <iostream>
using namespace std;

struct Car
{
    string model;
    int year;
    string color;
};

void printCar(Car &car);
void paintCar(Car &car, string color);

int main () 
{
    Car car1;
    Car car2;

    car1.model = "Volkswagen Polo";
    car1.year = 2022;
    car1.color = "Black";

    car2.model = "Ferrari F40";
    car2.year = 1987;
    car2.color = "Yellow";

    paintCar(car1, "White");
    paintCar(car2, "Red");

    printCar(car1);
    printCar(car2);
}

void printCar(Car &car)
{
    cout << car.model << endl;
    cout << car.year << endl;
    cout << car.color << "\n\n";
}
void paintCar(Car &car, string color)
{
    car.color = color;
} 