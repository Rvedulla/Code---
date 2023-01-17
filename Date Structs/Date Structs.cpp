#include <iostream>
#include "Date.h"

using namespace std;

int main(){

    Date* dates = new Date[3];

    dates[0] = Date();
    dates[1] = Date(11,11,1918);
    dates[2] = Date(4,7,2022);
    
    for (int i = 0; i < 3; i++){
        cout << dates[i] << endl;
    }

    delete[] dates;

    return 0;
}
