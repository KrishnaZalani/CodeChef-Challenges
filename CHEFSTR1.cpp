//Partial - 30/100
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int sum = 0;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] > arr[i - 1])
            {
                sum = sum + arr[i] - arr[i - 1] - 1;
            }

            else if (arr[i - 1] > arr[i])
            {
                sum = sum + arr[i - 1] - arr[i] - 1;
            }

            // sum = sum + abs(arr[i] - arr[i - 1] - 1);
            // cout << "Sum is : " << sum << endl;
        }

        cout << sum << endl;
    }
}