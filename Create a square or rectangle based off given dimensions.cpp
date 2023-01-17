#include <iostream>

using namespace std;

int main(){
    int width, height;
    cin >> width >> height;
    
    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++)
            if (j == width - 1)
                cout << "*" << endl;
            else if (j == 0 || i == 0 || i == height -1)
                cout << "* ";
            else 
                cout << "  ";

        cout << endl;
    return 0;
}
