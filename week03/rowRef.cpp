

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> matrix = {{1, 2}, {3, 4}};

    // Each 'row' is a COPY of a row in the matrix
    for (vector<int> row : matrix) {
        row[0] = 99; // Modify the first element of the copied row
    }

    // Print the original matrix
    for (vector<int> row : matrix) 
    {
        cout << row[0] << " " << row[1] << endl;
    }

    return 0;
}
