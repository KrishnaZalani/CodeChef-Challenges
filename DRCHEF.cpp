#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        cin >> x;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int count = 0;

        int temp = a[0];
        while (temp > 0)
        {
            temp = temp - x;
            count++;
            temp = min(2 * temp, a[0]);
            x = 2 * x;
        }

        cout << count + n - 1;
    }
}