#include <iostream>
#include <cmath>
#include <vector>
#include <numeric> 
using namespace std;

int main(){
    int Power = 2;
    vector <int> powerNumber;
    vector <int> number;
    for(int j = 1; j < 101 ; j++){
        number.push_back(j);
        int squares = pow(j,Power);
        powerNumber.push_back(squares);
    }
    int sumPowerNumber = accumulate(powerNumber.begin(),powerNumber.end(),0);
    int sumNumberArray = accumulate(number.begin(),number.end(),0);
    int sumNumber = pow(sumNumberArray,Power);
    cout<<sumNumber - sumPowerNumber<<endl;
    return 0;

}
