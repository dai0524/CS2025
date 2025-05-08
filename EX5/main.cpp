
#include <iostream>
using namespace std;

class Car {
public:
    string driveMode;

    Car() {
        cout << "Constructing Car" << endl;
    }

    void printDriveMode(const string& brand) {
        cout << brand << " : Drive Mode = " << driveMode << endl;
    }
};

class BMW_Car : public Car {
public:
    BMW_Car() {
        cout << "Constructing BMW_Car" << endl;
        driveMode = "Rear-wheel";
        printDriveMode("BMW");
    }
};

class AUDI_Car : public Car {
public:
    AUDI_Car() {
        cout << "Constructing AUDI_Car" << endl;
        driveMode = "Front-wheel";
        printDriveMode("Audi");
    }
};

class BENZ_Car : public Car {
public:
    BENZ_Car() {
        cout << "Constructing BENZ_Car" << endl;
        driveMode = "Front-wheel";
        printDriveMode("Benz");
    }
};

int main() {
    BMW_Car bmw;
    AUDI_Car audi;
    BENZ_Car benz;
    return 0;
}
