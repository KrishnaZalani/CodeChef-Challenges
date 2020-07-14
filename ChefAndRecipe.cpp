#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, i, temp = 0, count = 1, z = 0;
        cin >> n;

        int A[n], checker[n], save[n];
        for (i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        for (i = 0; i < n; i++) // 1 7 7 3 3 4 4 4
        {
            if (i == (n - 1)) // when i=7
            {
                save[temp] = count;
                checker[temp] = A[i];
                break;
            }

            if (A[i + 1] != A[i]) // i=6
            {
                checker[temp] = A[i]; // checker[0] = 1  checker[1] = 7  checker[2] =3  checekr[3] = 4      kon kon se numbers he list me
                save[temp] = count;   // save[0] = 1 save[1] = 2 save[2] = 2  save[3]=3           counts kitne he har number ke
                temp++;               // temp=3
                count = 1;
            }

            else
            {
                count++; //count=3
            }
        }

        int so1 = sizeof(checker) / sizeof(checker[0]);
        sort(checker, checker + so1);

        int so2 = sizeof(save) / sizeof(save[0]);
        sort(save, save + so2);

        for (i = 0; i < n; i++)
        {

            if (checker[i + 1] == checker[i] || save[i + 1] == save[i])
            {
                z = 1;
            }
        }

        if (z = 1)
        {
            cout << "NO\n";
        }
        if (z = 0)
        {
            cout << "YES\n";
        }
    }

    return 0;
}
