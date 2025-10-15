#include <iostream>
#include <vector>
using namespace std;

bool isSorted(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

int main()
{

    vector<string> schools(3);
    schools.at(0) = "UCSB";
    schools.at(1) = "UCSD";
    schools.at(2) = "UCB";

    

    return 0;
}
