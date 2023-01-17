#include <iostream>
#include "geometry.h"

using namespace std;

int main() {

    if (pointInRect(3, 3, 2, 5, 5, 5)) {
        cout << "INSIDE" << endl;
    }
    else {
        cout << "OUTSIDE" << endl;
    }
    
    return 0;
}
