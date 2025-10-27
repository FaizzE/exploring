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
void change(Batsman* b) {
    // (*b).avg = 76.28;
    b->avg = 88.88;
}


int main() {

    Batsman b1("Virat Kohli", 25000, 55.78);
    Batsman b2("Rohit Sharma", 20000, 40.8);

    Batsman* a1 = &b1;
    cout << (*a1).name << "\n";
    (*a1).avg = 75.5;
    change(&b1); // or change(a1);
    cout << b1.avg;


}