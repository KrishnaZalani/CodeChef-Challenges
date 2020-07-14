//AC-100
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ca = 0, cb = 0;
        cin >> n;

        int a[n], b[n];
        int suma = 0;
        int sumb = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cin >> b[i];

            while (a[i] != 0)
            {
                suma = suma + a[i] % 10;
                a[i] = a[i] / 10;
            }
            while (b[i] != 0)
            {
                sumb = sumb + b[i] % 10;
                b[i] = b[i] / 10;
            }

            if (suma > sumb)
            {
                ca++;
            }

            if (sumb > suma)
            {
                cb++;
            }

            if (sumb == suma)
            {
                ca++;
                cb++;
            }

            suma = 0;
            sumb = 0;
        }

        if (ca > cb)
        {
            cout << 0 << endl;
            cout << ca << endl;
        }
        if (cb > ca)
        {
            cout << 1 << endl;
            cout << cb << endl;
        }

        if (ca == cb)
        {
            cout << 2 << endl;
            cout << ca << endl;
        }
    }
}