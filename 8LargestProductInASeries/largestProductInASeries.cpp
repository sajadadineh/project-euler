#include <iostream>
#include <fstream>
#include <vector>
#include <numeric> 
using namespace std;

vector<int> digitsArray;

void makeArray(){
        ifstream fdigits;
        string line;

	fdigits.open("./digits.txt");

	if (fdigits.is_open()){
		while (getline(fdigits,line)){
                        int digitsLine = line.length();
                        for (int i = 0; i < digitsLine; i++){ 
                                int x = (int)line[i] - 48;
                                digitsArray.push_back(x);
                        }
                }
		fdigits.close();
	}else cout<<"file not open"<<endl;
}

int main(){
        int maxDigit;
        int currentDigit;
        vector <int> ta;

	makeArray();

        for (int i = 0; i < digitsArray.size(); i++){
                for (int j = 0+i; j < 4+i; j++){
                        ta.push_back(digitsArray[j]);
                }
                currentDigit = accumulate(ta.begin(),ta.end(),1,multiplies<int>());
                ta.clear();
                if (currentDigit > maxDigit){
                        maxDigit = currentDigit;
                }
        }
	
        cout<<maxDigit<<endl;
	return 0;

}
