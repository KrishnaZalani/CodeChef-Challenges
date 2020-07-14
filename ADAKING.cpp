#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string chess = "O";
        for (int i = 1; i < 64; i++)
        {
            if (i % 8 == 0)
            {
                chess.append("\n");
            }
            if (i < k)
            {
                chess.append(".");
            }
            else
            {
                chess.append("X");
            }
        }
        cout << chess;
    }
}