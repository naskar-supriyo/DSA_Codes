#include <iostream>
#include <vector>
#include <algorithm>
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

// Majority element in Opimized way
int majorityElOpt(vector<int> arr)
{
    int n = arr.size();

    // sorting the vector
    sort(arr.begin(), arr.end());

    // frec count
    int f = 1, ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            f++;
        }
        else
        {
            f = 1;
            ans = arr[i];
        }
        if (f > n / 2)
        {
            return ans;
        }
    }
    return ans;
}

// main function
int main()
{
    vector<int> arr = {0, 0, 0, 1, 1, 2, 2, 2, 2, 2};

    int value = majorityElOpt(arr);
    cout << value;

    return 0;
}