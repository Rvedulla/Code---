#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // Your code here
    float x1, y1, x2, y2, l;
    cin >> x1 >> y1 >> x2 >> y2;

    l = sqrt(pow(x1-x2 , 2)+pow(y1-y2 , 2));
    cout << l << endl;

    return 0;
}
