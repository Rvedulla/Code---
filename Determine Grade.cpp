#include <iostream>

using namespace std;

int main(){
    /* your code goes here */
    int x;
    cin >> x;

    if (x>=90&&x<=100){
        cout <<"A";
    }
    else if (x>=80&&x<=99){
        cout <<"B";
    }
    else if (x>=70&&x<=79){
        cout <<"C";
    }
    else if (x>=60&&x<=69){
        cout <<"D";
    }
    else if (x>=0&&x<=59){
        cout <<"F";
    }
    else {
        cout << "Invalid mark";
    }
    return 0;
}
