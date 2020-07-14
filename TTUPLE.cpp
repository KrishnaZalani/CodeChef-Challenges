#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int p, q, r, a, b, c; // p,q,r -> given    a,b,c -> target

        cin >> p >> q >> r;
        cin >> a >> b >> c;

        int mul3 = 0, mul2 = 0;
        int add3 = 0, add2 = 0;

        int temp1 = a - p, temp2 = b - q, temp3 = c - r;
        float temp4 = float(a) / float(p), temp5 = float(b) / float(q), temp6 = float(c) / float(r);

        if (a == p && b == q && c == r)
        {
            // cout << "Statement 1" << endl;
            cout << 0;
        }

        else if (a == p && b == q && c != r)
        {
            // cout << "Statement 2" << endl;

            cout << 1;
        }
        else if (a == p && c == r && b != q)
        {
            // cout << "Statement 3" << endl;

            cout << 1;
        }
        else if (c == r && b == q && a != p)
        {
            // cout << "Statement 4" << endl;
            cout << 1;
        }

        if (a == p && b != q && c != r)
        {
            if (temp2 == temp3 || temp5 == temp6)
            {
                // cout << "Statement 5" << endl;
                cout << 1 << endl;
            }
            else
            {
                // cout << "Statement 6" << endl;

                cout << 2 << endl;
            }
        }
        if (a != p && b == q && c != r)
        {
            if (temp1 == temp3 || temp4 == temp6)
            {
                // cout << "Statement 7" << endl;

                cout << 1 << endl;
            }
            else
            {
                // cout << "Statement 8" << endl;

                cout << 2 << endl;
            }
        }
        if (a != p && b != q && c == r)
        {
            if (temp2 == temp1 || temp5 == temp4)
            {
                // cout << "Statement 9" << endl;
                cout << 1 << endl;
            }
            else
            {
                // cout << "Statement 10" << endl;

                cout << 2 << endl;
            }
        }

        if (a != p && b != q && c != r)
        {
            // ADDITION

            //jab p,q,r me se koi do same number se add hokar a,b,c ban jaye
            if (temp1 == temp2 && temp1 != temp3)
            {
                // cout << "Statement 11" << endl;

                add2 = 1;
            }
            if (temp1 == temp3 && temp1 != temp2)
            {
                // cout << "Statement 12" << endl;

                add2 = 1;
            }
            if (temp3 == temp2 && temp3 != temp1)
            {
                // cout << "Statement 13" << endl;

                add2 = 1;
            }

            //jab teeno same se multiply hokar a,b,c ban rahe ho

            if (temp1 == temp2 && temp2 == temp3 && temp1 == temp3)
            {
                // cout << "Statement 14" << endl;

                add3 = 1;
            }

            // MULTIPLICATION

            // jab p,q,r me se koi do same number se multiply hokar a,b,c ban jaye
            if (temp4 == temp5 && temp4 != temp6)
            {
                // cout << "Statement 15" << endl;

                mul2 = 1;
            }
            if (temp4 == temp6 && temp4 != temp5)
            {
                // cout << "Statement 16" << endl;

                mul2 = 1;
            }
            if (temp6 == temp5 && temp6 != temp4)
            {
                // cout << "Statement 17" << endl;

                mul2 = 1;
            }

            //jab teeno same se multiply hokar a,b,c ban rahe ho

            if (temp4 == temp5 && temp5 == temp6 && temp4 == temp6)
            {
                // cout << "Statement 18" << endl;

                mul3 = 1;
            }

            // FINAL LOGIC

            if (mul2 == 1 && add3 != 1 && add2 != 1)
            {
                // cout << "Statement 19" << endl;

                cout << 2 << endl;
            }

            if (mul3 == 1 || add3 == 1)
            {
                // cout << "Statement 20" << endl;

                cout << 1 << endl;
            }

            if (add2 == 1 && mul3 != 1)
            {
                // cout << "Statement 21" << endl;

                cout << 2 << endl;
            }

            else
            {
                // cout << "Statement 22" << endl;

                cout << 3 << endl;
            }
        }
    }
}