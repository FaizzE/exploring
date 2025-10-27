#include<iostream>
using namespace std;

class Car{
public:
    string name;
    string color;
    int price;
    int seats;
    string type;

    Car() { // Default Constructor

    }

    Car(string n, string c, int p, int s, string t) { //  Parameterised Constructor
        name = n;
        color = c;
        price = p;
        seats = s;
        type = t;
    }
};

void printDetails(Car cr) {
    cout << "Car : " << cr.name << ", " << cr.color << ", ₹" << cr.price << ", " << cr.seats << " seats, " << cr.type << endl;
}


int main() {

    Car cr("Tata Harrier", "Black", 3000000, 6, "SUV");
    // Car cr2("Thar Rox", "Red", 2500000, 6, "Show off");
    // Car cr;
    // cr.name = "Tata Harrier";
    // cr.color = "Black";
    // cr.price = 3000000;
    // cr.seats = 6;
    // cr.type = "SUV";
    
    Car cr2;
    cr2.name = "Thar Rox";
    cr2.color = "Black";
    cr2.price = 2500000;
    cr2.seats = 6;
    cr2.type = "Show off";

    printDetails(cr);
    printDetails(cr2);

    // cout << "Car 1: " << cr.name << ", " << cr.color << ", ₹" << cr.price << ", " << cr.seats << " seats, " << cr.type << endl;
    // cout << "Car 2: " << cr2.name << ", " << cr2.color << ", ₹" << cr2.price << ", " << cr2.seats << " seats, " << cr2.type << endl;




}