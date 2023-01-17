#include <iostream>

using namespace std;

int main(){
    
    long x = 4919412188601205589;
    
    unsigned char* r = (unsigned char*) &x;
    
    for (int i = 0; i < 8; i++){
    cout << *r;
    r++;
    }
    
    cout << " " << endl;    

    return 0;
}
