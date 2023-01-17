#include <iostream>

using namespace std;

int main(){
    int x, y;
    cin >> x;

    for (int y = 1; y <=12; y++)
        cout << x << " x " << y << " = " << (x * y) << endl;

    return 0;
}
