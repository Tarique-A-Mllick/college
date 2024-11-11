#include <iostream>
using namespace std;


class Vehicle {
public:
    virtual double fuelEfficiency() = 0; // Pure virtual function
};


class Car : public Vehicle {
private:
    double milesDriven;
    double gallonsUsed;

public:
    Car(double m, double g) : milesDriven(m), gallonsUsed(g) {}

    double fuelEfficiency() override {
        return milesDriven / gallonsUsed;
    }
};


class Bike : public Vehicle {
private:
    double milesDriven;
    double gallonsUsed;

public:
    Bike(double m, double g) : milesDriven(m), gallonsUsed(g) {}

    double fuelEfficiency() override {
        return milesDriven / gallonsUsed;
    }
};

int main() {
    double carMiles, carGallons, bikeMiles, bikeGallons;

    cout << "Enter miles driven by Car: ";
    cin >> carMiles;
    cout << "Enter gallons used by Car: ";
    cin >> carGallons;

    cout << "Enter miles driven by Bike: ";
    cin >> bikeMiles;
    cout << "Enter gallons used by Bike: ";
    cin >> bikeGallons;

    Car car(carMiles, carGallons);
    Bike bike(bikeMiles, bikeGallons);

    cout << "Fuel efficiency of Car: " << car.fuelEfficiency() << " mpg" << endl;
    cout << "Fuel efficiency of Bike: " << bike.fuelEfficiency() << " mpg" << endl;

    return 0;
}
