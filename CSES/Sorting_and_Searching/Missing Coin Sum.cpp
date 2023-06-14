#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    // Sort the coins in ascending order
    sort(coins.begin(), coins.end());

    long long int target = 1; // Smallest sum that cannot be formed
    for (int i = 0; i < n; i++)
    {
        // If the current coin is greater than the target, we found the answer
        if (coins[i] > target)
        {
            break;
        }

        // Otherwise, update the target by adding the current coin
        target += coins[i];
    }

    cout << target << endl;

    return 0;
}