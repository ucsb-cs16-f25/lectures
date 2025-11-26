#include <iostream>
using namespace std;

const int BASE = 16;

// Function to convert a decimal number to hexadecimal iteratively
string decToHex_itterative(int decimal)
{
    if (decimal == 0) // Handle edge case where input is zero
        return "0";

    string hex = ""; // String to store the hexadecimal result

    while (decimal > 0) // Loop until the decimal number becomes zero
    {
        int remainder = decimal % BASE; // Get the remainder when divided by 16

        // Convert remainder to the corresponding hexadecimal digit and prepend to result
        hex = (remainder < 10 ? char('0' + remainder) : char('A' + (remainder - 10))) + hex;

        decimal /= BASE; // Divide the number by 16 for the next iteration
    }

    return hex;
}

// Function to convert a decimal number to hexadecimal recursively
string decToHex_recursive(int decimal)
{
    if (decimal == 0) // Base case: if decimal is zero, return an empty string
        return "";

    // Recursive call: process the quotient first
    string hex = decToHex_recursive(decimal / BASE);

    int remainder = decimal % BASE; // Get the remainder when divided by 16

    // Convert remainder to the corresponding hexadecimal digit and append to result
    hex += (remainder < 10 ? char('0' + remainder) : char('A' + remainder - 10));

    return hex;
}

string decToHex_recursive_2(int decimal)
{
    // Base case: return "0" if the number itself is 0
    if (decimal == 0)
        return "";
        // return "0"; //Results in a leading 0

    // Recursive case
    if (decimal < BASE)
    {
        // Single hex digit — return directly
        return (decimal < 10 ? string(1, '0' + decimal)
                             : string(1, 'A' + decimal - 10));
    }

    // Process the rest recursively
    string hex = decToHex_recursive(decimal / BASE);

    int remainder = decimal % BASE;

    // Append the last digit
    hex += (remainder < 10 ? char('0' + remainder)
                           : char('A' + remainder - 10));

    return hex;
}

int main()
{
    cout << "Hex of 0: " << decToHex_recursive_2(0) << endl;
    cout << "Hex of 15: " << decToHex_recursive_2(15) << endl;
    cout << "Hex of 154: " << decToHex_recursive_2(154) << endl;
    cout << "Hex of 4095: " << decToHex_recursive_2(4095) << endl;

    return 0;
}