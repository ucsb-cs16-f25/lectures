// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// bool isValidLayout(vector<int> layout) {
//     return layout[0] != layout[1];
// }

// void generate_arrangements(int columns) {
//     if (columns < 2) {
//         cout << "Not enough columns for both dancers." << endl;
//         return;
//     }
    
//     vector<vector<int>> validLayouts;
//     for (int col1 = 0; col1 < columns; col1++) {     // Column for @lex (row 0)
//         for (int col2 = 0; col2 < columns; col2++) { // Column for &rain (row 1)
//             vector<int> layout = {col1, col2};
//             if (isValidLayout(layout)) {
//                 validLayouts.push_back(layout);
//             }
//         }
//     }
    
//     for (const auto& p : validLayouts) {
//         vector<string> stage(2, string(columns, '_'));
//         stage[0][p[0]] = '@'; // @lex
//         stage[1][p[1]] = '&'; // &rain
        
//         for (const auto& row : stage) {
//             cout << row << endl;
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int columns;
//     cout << "Enter the number of columns: ";
//     cin >> columns;
//     generate_arrangements(columns);
//     return 0;
// }


#include <iostream>

using namespace std;

void doublevaluebyref(int &num)
{
    num = num * 2;
    cout << "inside funtion:" << num << endl;

}

void doublevaluebyPointer(int *num)
{
    *num = *num * 2;
    cout << "inside funtion:" << num << endl;

}

int main(int argc, char *argv[]) 
{
    
    string line = string(25,'_') + "\n\n";
    cout << argc << endl;
    cout << argv[0] << endl;
    cout << argv[1] << endl;
    
    cout<< line;
    for (int i=0; i<argc; i++)
    {
        cout << argv[i]<< endl;
    }
        cout<< line;
    for (int i=0; i<argc; i++)
    {
        cout << &argv[i]<< endl;
    }
        cout<< line;

        for (int i=0; i<argc; i++)
    {
        cout << (void *)argv[i]<< endl;
    }
    return 0;
}



#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int BASE = 16;

const vector<char> hexDigits = {
    '0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

int factorial(int n)
{

  if (n == 1)
    return 1;

  return n * factorial(n - 1);
}

int sum(int n)
{
  if (n == 1)
    return 1;
  return n + sum(n - 1);
}

int fibonacci(int n)
{
  if (n == 1 or n == 2)
    return 1;

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int power(int n, int p)
{
  if (p == 1)
    return n;

  return (n * power(n, p - 1));
}

string decimal2binary(int n)
{
  if (n < 2)
    return to_string(n);

  return decimal2binary(n / 2) + to_string(n % 2);
}

string decimal2Hex_itterative(int n)
{
  int r = 0;
  string hex = "";
  while (n != 0)
  {
    r = n % 16;
    hex = ((r > 9) ? char('A' + r - 10) : char('0' + r)) + hex;
    n = n / BASE;
  }
  return hex;
}

string decimal2Hex_recursive(int decimal)
{

  if (decimal == 0)
    return "";

  string hex = decimal2Hex_recursive(decimal / BASE);
  int r = decimal % BASE;
  hex += (r > 9) ? char(r + 'A' - 10) : char(r + '0');
  return hex;
}

int main()
{
  // cout << factorial(5) << endl;
  // cout << sum(5) << endl;
  // cout << fibonacci(8) << endl;
  // cout << power(2, 6) << endl;
  // cout << decimal2binary(12) << endl;
  cout << decimal2Hex_itterative(440) << endl;
  cout << decimal2Hex_recursive(440) << endl;

  return 0;
}