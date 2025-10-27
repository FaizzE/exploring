#include<iostream>
using namespace std;

class Batsman {
public:
    string name;
    int runs;
    float avg;

    Batsman(string name, int runs, float avg) {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};


int main() {

    Batsman b1("Virat Kohli", 25000, 55.78);
    Batsman* b2 = new Batsman("Rohit Sharma", 20000, 40.8);

    cout << b1.name << ", " << b1.runs << "\n"; 
    cout << b2->name << ", " << b2->runs << "\n";
    


}