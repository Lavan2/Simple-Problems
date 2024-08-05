#include<bits/stdc++.h>
using namespace std;
int getdecimal(long long binary){
    int i = 0, decimal = 0;
    while(binary!=0){
        int digit = binary % 10;
        decimal += digit * pow(2,i);
        binary/=10;
        i++;
    }
    return decimal;
}
int main(){
    long long binary = 11011;
    cout<<getdecimal(binary);
    return 0;
}
