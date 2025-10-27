#include<iostream>
using namespace std;

class Batsman{
public:
    string name;
    int runs;
    float avg;

    /*
        -> this:  is a pointer to the current object It is commonly 
        used in constructors and member functions to distinguish between 
        class members and parameters when they share the same name.
    */


    Batsman(string name, int runs, float avg) {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
    void print(int runs) {
        cout << "Name: " << name << "\n" << "Runs: " << runs<< "\n" << "Avg: " << avg  << "\n" << "\n";
        // cout << runs << "\n";
    }
    int avgMatches() {
        return runs/avg;
    }
};


int main() {
    Batsman b1("Virat Kohli", 25000, 55.78);

    Batsman b2("Rohit Sharma", 20000, 40.8);

    b1.print(10);
    b2.print(20);
    cout << b1.avgMatches() << "\n";
    cout << b2.avgMatches() << "\n";

}