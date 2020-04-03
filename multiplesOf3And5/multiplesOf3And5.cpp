#include <iostream>
using namespace std;
int sum = 0;

int main(){

    for (int i=0; i<1000; i++)
    {
        if (i%3==0 || i%5==0){
            sum = sum + i;
        }
    }
    cout<<sum<<endl;

}
