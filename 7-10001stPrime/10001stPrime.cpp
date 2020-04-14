#include <iostream>
#include <vector>

using namespace std;

int main(){
    int j = 2;
    vector <int> primeNumber;
    
    do{
        bool isPrime = true;
        for(int i = 2; i <= j / 2; ++i){
            if(j % i == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            primeNumber.push_back(j);
            }
        j++;
    } while (primeNumber.size() < 10001);

    cout<<primeNumber.back()<<endl;

    return 0;
}
