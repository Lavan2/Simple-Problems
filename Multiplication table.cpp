Multiplication table upto 12
#include<iostream>
using namespace std;
int main(){
    int a, i=0;
    cout<<"Enter the Number:";
    cin>>a;
    for(i=1;i<=12;i++){
        cout<< a << "x" << i << "=" << a * i<< endl;
    }
    return 0;
}
