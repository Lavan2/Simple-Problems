#include<iostream>
using namespace std;

int main()
{
    int num1 = 36, num2 = 60, hcf = 1;

    // Find the minimum of num1 and num2
    int min_num = (num1 < num2) ? num1 : num2;

    // Loop from 1 to min_num
    for(int i = 1; i <= min_num; i++)
    {
        // Check if i is a common factor of both num1 and num2
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    cout << "HCF of " << num1 << " and " << num2 << " is " << hcf;

    return 0;
}
