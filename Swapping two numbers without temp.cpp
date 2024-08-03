#include<iostream>
using namespace std;
int main(){
    int num1, num2, temp;
    cout<<"Enter the first value:";
    cin>>num1;
    cout<<"Enter the second value:";
    cin>>num2;
    num2 = num2 + num1;
    num1 = num2 - num1;
    num2 = num2 - num1;
    cout<<num1<<endl;
    cout<<num2<<endl;
    return 0;
}
