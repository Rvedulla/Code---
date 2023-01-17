#include <iostream>
#include <ostream>
#include <string>

using namespace std;

struct IntArray{
    int* storage; // This is a chunk of memory on the heap, where our values will be stored
    int capacity;
    int count;

    IntArray(){
        count = 0;
        capacity = 1;
        storage = new int[capacity];
    }

    IntArray(const IntArray& other){
        count = other.count;
        capacity = other.capacity;
        storage = new int[capacity];
        for (int i = 0; i < count; i++){
            storage[i] = other.storage[i];
        }
    }

    void append(int value){
        // We know we always have space for (at least) one more value
        // We can put it in position "count"
        storage[count] = value;
        count++;

        // Make sure we still have available capacity
        if (count == capacity){
            // We are out of space here
            // We need to handle it
            capacity *= 2;

            int* temp = new int[capacity];

            for (int i = 0; i < count; i++){
                temp[i] = storage[i];
            }

            int* old = storage;
            storage = temp;
            delete[] old;
        }
    }

    ~IntArray(){
        delete[] storage;
    }
};

IntArray operator+(const IntArray& left, const IntArray& right){
    IntArray result = left;
    for (int i = 0; i < right.count; i++){result.append(right.storage[i]);}
    return result;
};

ostream& operator<<(ostream& os, const IntArray& arr){
    os << "[";
    for (int i = 0; i < arr.count; i++){
        os << arr.storage[i];
        if (i < arr.count - 1) os << ", ";
    }
    os << "]";
    return os;
}
