#include <iostream>
using namespace std;

int main()
{
    int n = 100, max = 0, l = 0, j;
    char mx[20];
    char str[n] = "do or die";
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            l++;
            if (l > max)
            {
                max = l;
                j = i - l+1;
            }
            continue;
        }
        l = 0;
    }

    cout << max << endl;
    for (int i = j; i <j + max; i++)
    {
        cout << str[i];
    }
    return 0;
}