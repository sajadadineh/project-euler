#include <iostream>
#include <math.h>
using namespace std;

void primeFactor(long int num){  
    while (num % 2 == 0){  
        cout << 2 <<endl;  
        num = num/2;
    }
    for (int i = 3; i <= sqrt(num); i = i + 2){  
        while (num % i == 0){  
            cout << i <<endl;  
            num = num/i;  
        }  
    }  
    if (num > 2){
        cout << num <<endl;  
    }
}  

int main(){
    long int num =600851475143;
    primeFactor(num);
    return 0;
}
