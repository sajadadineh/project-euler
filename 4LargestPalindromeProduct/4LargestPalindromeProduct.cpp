#include <iostream>
#include <vector>
using namespace std;

int computing(int x, int y){
    int multiply = x*y;
    int splitmultiply ;
    vector< int > splitArray;
    
    for (int i = 0 ; i < 6 ; i++){
        splitmultiply = multiply % 10;
        splitArray.push_back(splitmultiply);
        multiply = multiply /10;
    }

    int endArray = 5;
    int firstArray = 0;
    for (int j = 0 ; j < 3 ; j++){
        if (splitArray[firstArray] == splitArray[endArray]){
            // cout<<"Between the numbers "<<firstArray<<" and "<<endArray<<" was correct\n";
            firstArray ++;
            endArray --;
        }
    }

    splitArray.clear();
    if (firstArray == 3){
        return true;
    }else{
        return false;
    }
    
}

int main(){
    int x = 999;
    int y = 999;
    vector< int > totalPalindrome;
    while (x > 99){
        y = 999;
        while (y > 99){
            int output = computing(x,y);
            if (output == true){
                // cout<<"====> find yout number : "<<x<<" and "<<y<<endl;
                int multiplyNum = x*y;
                totalPalindrome.push_back(multiplyNum);
            }
            y --;
        }
        x --;
    }

    int sizeTotalP = totalPalindrome.size();
    cout<<sizeTotalP<<" palindrome between 99 and 999"<<endl;
    
    int max = 0;
    for (int k = 0; k < sizeTotalP; k++){
        if (totalPalindrome[k]>max){
            max = totalPalindrome[k];
        }
    }
    cout<<max<<endl;

    // for (int i = 0; i < sizeTotalP;i++){
    //     cout<<totalPalindrome[i]<<endl;
    // }

    return 0;
}