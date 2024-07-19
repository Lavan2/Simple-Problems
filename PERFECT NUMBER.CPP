#include<iostream>
using namespace std;
int main(){
    cout<<"The Perfect Numbers are: "<<endl;
    int n=1;
    while(n<=500){
       int sum = 0;
    for(int i=1;i<n;i++){
        if(n%i==0)
        sum = sum + i;
    }
    if(sum==n){
    cout<<n<<endl;
    }
    n++;
    }
}

/*OUTPUT:
The Perfect Numbers are:
6
28
496
*/
