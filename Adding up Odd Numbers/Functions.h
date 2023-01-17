#ifndef FUNCTIONS_H
#define FUNCTIONS_H

bool isEven(int n){
    
    return n % 2 == 0;
}

int sumOdd(int numbers[], int size){
    int sum = 0;
        for ( int i = 0; i <size ; i++ ){
            if (numbers[i] % 2 != 0)
            {
                sum += numbers[i]; 

            }


        }




    return sum;
}
    




#endif
