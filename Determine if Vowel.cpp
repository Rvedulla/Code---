#include <iostream>

using namespace std;

int main(){
    
    char ro;
    cin >> ro;

    if (ro=='a' || ro=='e' || ro=='i' || ro=='o' || ro=='u'){
        cout<<"Letter is a vowel.";
    }
    else if (ro=='A' || ro=='E' || ro=='I' || ro=='O' || ro=='U'){
        cout<<"Letter is a vowel.";
    } 
    else { 
        cout<<"Letter is not a vowel.";
    }
    cout<<endl;
    

    return 0;
}
