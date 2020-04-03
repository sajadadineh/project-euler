#include <iostream>
using namespace std;

int main(){
    int oneNumber = 1;
    int twoNumber = 2;
    int newNumber;
    int sum = 0;
    while (oneNumber < 4000000){
        if (oneNumber % 2 == 0){
            sum = sum + oneNumber;
        }
        newNumber = oneNumber + twoNumber;
        oneNumber = twoNumber;
        twoNumber = newNumber;
    }
    cout<<sum<<endl;
}
