#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 3};
    vector<int> b = {3, 2, 1};

    int scoreA = 0, scoreB = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
            scoreA++;
        else if (a[i] < b[i])
            scoreB++;
    }

    cout << "[" << scoreA << "," << scoreB << "]";
}