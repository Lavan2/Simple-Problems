#include<iostream>
using namespace std;
int main(){
	int i = 0;
	while(i<=100){
		if(i%7 == 0){
			cout<<"Multiply of 7"<<endl;
			i = i + 1;
			continue;
		}
		cout<<i<<endl;
		i++;
	}
	return 0;
}
