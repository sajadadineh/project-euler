#include <iostream>
using namespace std;

int main(){
	cout<<"Please wait 10 seconds"<<endl;
	long i = 1;
	while (true){
		int answerDivision = 0;
		for(int j = 1; j < 21; j++){
			if (i%j == 0){
				answerDivision ++;
			}else{
				break;
			}
		}
		if (answerDivision == 20){
			cout<<i<<endl;
			break;
		}
		i++;
	}
	return 0;
}
