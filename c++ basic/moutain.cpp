#include <iostream>
using namespace std;

int main()
{
    // for (int k = 0; k <= 3; k++)
    // {
    for (int i = 1; i <= 20; i++)
    {
        for (int k = 1; k <= 2; k++)
        {
            if (k != 2)
            {
                for (int j = 1; j <= 20 - i; j++)
                {
                    cout << " ";
                }
            }
            else
            {
                for (int j = 1; j <= 20 - i; j++)
                {
                    if (i <= 14)
                    {
                        cout << " ";
                        continue;
                    }
                    cout << "*";
                }
            }
            for (int j = 1; j <= i; j++)
            {
                cout << " *";
            }

            for (int j = 1; j <= 20 - i; j++)
            {
                cout << "  ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << " *";
            }
            if (k == 1)
            {
                for (int j = 1; j <= 20 - i; j++)
                {
                    if (i <= 14)
                    {
                        cout << " ";
                        continue;
                    }
                    cout << "*";
                }
            }
            else
            {
                for (int j = 1; j <= 20 - i; j++)
                {

                    cout << " ";
                }
            }
        }

        cout << endl;
    }

    //     for (int i = 1; i <= 20; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << " ";
    //         }
    //         for (int j = 1; j <= 20 - i; j++)
    //         {
    //             cout << " *";
    //         }

    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << "  ";
    //         }
    //         for (int j = 1; j <= 20 - i; j++)
    //         {
    //             cout << " *";
    //         }
    //         cout << endl;
    //     }
    // }
    return 0;
}