//Factorial number
#include<iostream>
using namespace std;
int main(){
    int num1, factorial = 1;
    cout<<"Enter the Number:";
    cin>>num1;
    for(int a = 1;a<=num1;a++){
        factorial = factorial * a;
    }
    cout<<factorial<<endl;
}
