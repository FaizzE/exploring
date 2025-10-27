#include<iostream>
using namespace std;

class Vector{
public:
    int size;
    int capacity;
    int* arr;

    Vector() {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    void addEle(int ele) {
        if(size == capacity) {
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i=0; i<size; i++) {
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = ele;
    }
    void print() {
        for(int i=0; i<size; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    int get(int idx) {
        if(size == 0) {
            cout << "Vector is Empty\n";
            return -1;
        }
        if(idx >= size || idx < 0) {
            cout << "Invalid Index\n";
            return -1;
        }
        return arr[idx];
    }
    void remove() {
        if(size == 0) {
            cout << "Vector is Empty\n";
        }
        size--;
    }
};

int main() {

    Vector vec;
    cout << "Size: " << vec.size << ", Capacity: " << vec.capacity << "\n";

    vec.addEle(10);
    vec.print();
    cout << "Size: " << vec.size << ", Capacity: " << vec.capacity << "\n";

    vec.addEle(20);
    vec.print();
    cout << "Size: " << vec.size << ", Capacity: " << vec.capacity << "\n";

    vec.addEle(30);
    vec.print();
    vec.remove();
    cout << "Size: " << vec.size << ", Capacity: " << vec.capacity << "\n";
    vec.print();
    
    // cout << vec.get(0);


}