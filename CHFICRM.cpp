//Time limit exceeded

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, countf = 0, countt = 0, i, flag = 1; // flag: No-0   Yes-1
        cin >> n;

        int a[n];

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[0] != 5)
            {
                flag = 0;
            }

            else
            {
                if (a[i] == 5)
                {
                    countf++;
                }
                if (a[i] == 10)
                {
                    countt++;

                    if (countf == 0)
                    {
                        flag = 0;
                    }

                    else
                    {
                        countf--;
                    }
                }
            }
        }

        if (flag != 0)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}
