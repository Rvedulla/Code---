#include <iostream>
#include "functions.h"

using namespace std;


int main(){

    int numbers[5] = {1,2,3,4,5};

    int test = sumOdd(numbers, 5);

    cout << test << endl;
    
    return 0;
}
