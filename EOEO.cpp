//Time limit exceeded

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int ts, js = 0, temp, count = 0, i;
        scanf("%d", &ts);

        temp = ts;
        float check;

        if (temp % 2 != 0)
        {

            js = temp / 2;
        }

        else
        {
            while (temp % 2 == 0)
            {
                temp = temp / 2;
                count++;
            }

            for (i = 0; i < ts / 2; i++)
            {
                check = i * 2 + 2;
                check = check / (count * 2);

                if (fmod(check, 2) == 0 && check != 0)
                {
                    js++;
                }
            }
        }

        printf("%d\n", js);
    }
}