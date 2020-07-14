#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {

        if (visited[i] == true)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x[4 * n], y[4 * n];

        for (int i = 0; i < 4 * n - 1; i++)
        {
            cin >> x[i];
            cin >> y[i];
        }

        int k = sizeof(x) / sizeof(x[0]);
        int z = sizeof(y) / sizeof(y[0]);

        countFreq(x, k);
        countFreq(y, z);
    }
}