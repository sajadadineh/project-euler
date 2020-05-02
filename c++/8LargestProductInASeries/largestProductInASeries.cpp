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
	long int maxDigit;
        long int currentDigit;
        vector <int> ta;

	makeArray();

        for (long int i = 0; i < digitsArray.size(); i++){
                for (long int j = 0+i; j < 13+i; j++){
                        ta.push_back(digitsArray[j]);
                }
                long int pro = 1;
                for (int x = 0; x < ta.size(); x++){
                        pro = pro * ta[x];
                }
                currentDigit = pro;
		ta.clear();
                if (currentDigit > maxDigit){
                        maxDigit = currentDigit;
                }
        }
	
        cout<<maxDigit<<endl;
	return 0;

}
