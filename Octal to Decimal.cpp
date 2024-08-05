#include<iostream>
#include<math.h>
using namespace std;

// function to convert octal to decimal
int getOctal(long long octal)
{
    int i = 0, decimal = 0;
    
    // will only work for bases 2 - 10
    int base = 8;
    while (octal!=0)
    {
        int digit = octal % 10;
        decimal += digit * pow(base, i);

        octal /= 10;
        i++;
    }
    return decimal;
}
int main()
{
    long long octal = 462;
    cout << getOctal(octal);   
    return 0;
}
