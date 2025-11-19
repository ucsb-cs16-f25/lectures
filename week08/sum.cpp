// This program calculates the sum of numbers from 1 to n using recursion.
// Example: if n = 10, it computes 1 + 2 + ... + 10 and prints the result.
#include <iostream>
using namespace std;

int sum(int n)
{
    // Base case: if n is 1, return 1
    if (n == 1)
        return 1;

    // Recursive case: n + sum of all numbers before it
    return n + sum(n - 1);
}

int main()
{
    int num = 10;
    cout << "Sum is: " << sum(num) << endl;
    return 0;
}