#include <iostream>
using namespace std;

class Appliance {
public:
    // Pure virtual function for calculating power consumption
    virtual double getPowerConsumption() = 0;
};

class WashingMachine : public Appliance {
private:
    double power;  // Power rating in kW
    double hours;  // Usage in hours per day

public:
    WashingMachine(double p, double h) : power(p), hours(h) {}

    // Override the pure virtual function
    double getPowerConsumption() override {
        return power * hours; // Consumption in kWh per day
    }
};

class Refrigerator : public Appliance {
private:
    double power;  
    double hours;  

public:
    Refrigerator(double p, double h) : power(p), hours(h) {}

    
    double getPowerConsumption() override {
        return power * hours; 
    }
};

int main() {
    double wmPower, wmHours, refPower, refHours;

    cout << "Enter Power Rating of Washing Machine (kW): ";
    cin >> wmPower;
    cout << "Enter Usage Hours of Washing Machine per day: ";
    cin >> wmHours;

    cout << "Enter Power Rating of Refrigerator (kW): ";
    cin >> refPower;
    cout << "Enter Usage Hours of Refrigerator per day: ";
    cin >> refHours;

    
    WashingMachine wm(wmPower, wmHours);
    Refrigerator ref(refPower, refHours);

    
    cout << "\nWashing Machine Power Consumption: " << wm.getPowerConsumption() << " kWh/day" << endl;
    cout << "Refrigerator Power Consumption: " << ref.getPowerConsumption() << " kWh/day" << endl;

    return 0;
}
