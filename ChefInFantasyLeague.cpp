//Code accepted

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s; //n=4 s=90

        int p[n];
        int i;
        for (i = 0; i < n; i++)
        {
            cin >> p[i]; //3 8 6 5   pi
        }

        int df[n];

        for (i = 0; i < n; i++)
        {
            cin >> df[i]; //0 1 1 0   df
        }

        int l = 100 - s; //l=10

        int save[2] = {100, 100}; //save[0]=3 save[1]=6

        for (i = 0; i < n; i++) //i=3
        {

            if (df[i] == 0)
            {
                if (p[i] < save[0])
                {
                    save[0] = p[i];
                }
            }

            if (df[i] == 1)
            {
                if (p[i] < save[1])
                {
                    save[1] = p[i];
                }
            }
        }

        if (l >= (save[0] + save[1]))
        {
            cout << "yes";
        }
        else
        {
            cout << "no";
        }
    }
    return 0;
}
