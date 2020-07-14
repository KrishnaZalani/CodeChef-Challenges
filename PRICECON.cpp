//Accepted

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i = 0, sum = 0;

        cin >> n;
        cin >> k; //ceil

        int p[n];

        for (i = 0; i < n; i++)
        {
            cin >> p[i];

            if (p[i] > k)
            {

                sum = sum + p[i] - k;
            }
        }

        cout << sum << endl;
    }
}