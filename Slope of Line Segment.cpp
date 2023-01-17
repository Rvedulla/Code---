#include <iostream>

using namespace std;

int main(){
    // Your code here
    float x1, y1, x2, y2, g;
    cin >> x1 >> y1 >> x2 >> y2;

    g = (y2-y1)/(x2-x1);
    cout << g << endl;

    return 0;
}
