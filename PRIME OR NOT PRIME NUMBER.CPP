#include<iostream>
using namespace std;
int main(){
    int num1,ctr=0;
    cin>>num1;
    for(int a=1;a<=num1;a++){
        if(num1 % a == 0){
            ctr++;
        }
     }
     if(ctr==2){
            cout<<"The entered number is Prime No: "<<num1<<endl;
        }
        else{
            cout<<"The entered number is Not a Prime No: "<<num1<<endl;
        }
        return 0;
}

/*OUTPUT:
2
The entered number is Prime No: 2
27
*/
The entered number is Not a Prime No: 27
