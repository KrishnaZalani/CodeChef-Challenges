//Accepted

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int i, count = 0;
        int k = 0;
        while (s[k])
        {
            k++;
        }

        for (i = 0; i < k - 1; i++)
        {
            if (s[i] == 'x' && s[i + 1] == 'y')
            {
                count++;
                i++;
                continue;
            }
            if (s[i] == 'y' && s[i + 1] == 'x')
            {
                count++;
                i++;
                continue;
            }
        }

        cout << count << endl;
    }
}