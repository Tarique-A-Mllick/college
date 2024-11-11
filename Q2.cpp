#include <iostream>
using namespace std;

int main()
{
    int num, sumOfDigits = 0, remainder;

    cout << "Enter a positive integer: ";
    cin >> num;

    while (num > 0)
    {
        remainder = num % 10;
        sumOfDigits += remainder;
        num /= 10;
    }

    cout << "Sum of the digits: " << sumOfDigits << endl;

    return 0;
}