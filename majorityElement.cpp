#include <iostream>
#include <vector>
using namespace std;

// Majority element in Brute Force way...
int majorityElBruteForce(vector<int> arr)
{
    int n = arr.size();
    for (int val : arr)
    {
        int count = 0;
        for (int el : arr)
        {
            if (el == val)
            {
                count++;
            }
        }
        return val;
    }
    return -1;
}

// main function
int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};

    int value = majorityElBruteForce(arr);
    cout << value;

    return 0;
}