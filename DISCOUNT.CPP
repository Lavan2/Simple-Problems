#include <iostream>
using namespace std;

int main() {
    float billAmount, finalAmount;

    // Input the bill amount
    cout << "Enter the bill amount: ";
    cin >> billAmount;

    // Calculate the final amount with the discount if applicable
    if (billAmount > 2000) {
        // finalAmount = billAmount * 0.90; // Applying 10% discount
    } else {
        finalAmount = billAmount; // No discount
    }

    // Output the final payable amount
    cout << "The final payable amount is: " << finalAmount << endl;

    return 0;
}

OUTPUT:
Enter the bill amount: 3000
The final payable amount is: 2700
