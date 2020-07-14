#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, val = 1, i, j; //val is the value which we are inserting
        cin >> n;
        int arr[n][n]; // arr[row][column]

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i % 2 != 0) // odd row hai isliye ulta insert krna he
                {
                    if (j == 0)
                    {
                        val = n * (i + 1);
                    }
                    arr[i][j] = val;
                    val--;
                }

                else // even row me to seedhe hi insert kr do
                {
                    if (j == 0 && i != 0)
                    {
                        val = n * (i + 1) - n + 1;
                    }
                    arr[i][j] = val; // val = 6  i = 1  j = 2
                    val++;
                }
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }

            cout << endl;
        }
    }
}

//                  j =  0 1      0 1 2

//                       1 2      1 2 3
//                       4 3      6 5 4
//                                7 8 9