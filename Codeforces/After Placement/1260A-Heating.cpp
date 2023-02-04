#include <iostream>
using namespace std;
int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int x = b / a;
        int y = b % a;
        cout << (a - y) * x * x + (x + 1) * (x + 1) * y << "\n";
    }
}