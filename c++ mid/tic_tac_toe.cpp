#include <iostream>
using namespace std;

class tic_tac_toe
{

    char arr[10];
    string name = "utkarsh", name2 = "narayan";
    char ch = 'X';

public:
    tic_tac_toe() {}
    void setarr()
    {
        for (int i = 0; i < 10; i++)
        {
            arr[i] = (i + 48);
        }
    }

    void printboard()
    {
        for (int i = 0; i <= 6; i = i + 3)
        {
            cout << "\t\t\t\t      |       |      " << endl;
            cout << "\t\t\t\t  " << arr[i + 1] << "   |   " << arr[i + 2] << "   |  " << arr[i + 3] << "   " << endl;
            if (i != 6)
                cout << "\t\t\t\t______|_______|______" << endl;

            else
                cout << "\t\t\t\t      |       |      " << endl;
        }
    }

    void setname()
    {

        cout << "Etner your name : ";
        cin >> name;
    }
    void setname()
    {

        cout << "Etner first player name : ";
        cin >> name;
        cout << "Etner second player name : ";
        cin >> name2;
    }

    void getchoise()
    {
        cout << name << ", now tell me what charecter you want to use O/X : ";
        cin >> ch;
    }

    void getnum()
    {
        int x;
        x = x + 500;
        cout << name << ", now tell me where you want to put your " << ch << " : ";
        cin >> x;
        if (x > 9 || x < 1)
        {
            cout << "Invalid choise" << endl;
            if (x > 1000)
            {
                exit(0);
            }
            getnum();
        }

        else if (arr[x] == (x + 48))
        {

            arr[x] = ch;
        }

        else
        {
            cout << "Can not overwrite it ::: " << endl;
            if (x > 1000)
            {
                exit(0);
            }
            getnum();
        }
    }
    void getnum2()
    {
        int x;
        char compch;
        if (ch == 'x' || ch == 'X')
        {
            compch = 'O';
        }

        else
        {
            compch = 'X';
        }

        x = x + 500;
        cout << name2 << ", now tell me where you want to put your O : ";
        cin >> x;
        if (x > 9 || x < 1)
        {
            cout << "Invalid choise" << endl;

            getnum2();
        }

        if (x > 1000)
        {
            exit(0);
        }

        if (arr[x] == (x + 48))
        {

            arr[x] = compch;
        }

        else
        {
            cout << "Can not overwrite it ::: " << endl;
            if (x > 1000)
            {
                exit(0);
            }
            getnum2();
        }
    }

    void comp()
    {
        int x = rand();
        x = x % 10;
        char compch;
        if (ch == 'x' || ch == 'X')
        {
            compch = 'O';
        }

        else
        {
            compch = 'X';
        }
        static int c = 0;
        c++;

        if (x > 9 || x < 1)
        {
            cout << "Invalid choise" << endl;
            if (c > 50)
            {
                exit(0);
            }
            comp();
        }

        if (arr[x] == (x + 48))
        {

            arr[x] = compch;
        }

        else
        {
            cout << "Can not overwrite it ::: " << endl;
            if (c > 50)
            {
                exit(0);
            }
            comp();
        }
    }

    int check_win()
    {
        if (arr[1] == arr[2] && arr[2] == arr[3])
            return 1;
        else if (arr[4] == arr[5] && arr[5] == arr[6])
            return 1;
        else if (arr[7] == arr[8] && arr[8] == arr[9])
            return 1;
        else if (arr[1] == arr[4] && arr[4] == arr[7])
            return 1;
        else if (arr[2] == arr[5] && arr[5] == arr[8])
            return 1;
        else if (arr[3] == arr[6] && arr[6] == arr[9])
            return 1;
        else if (arr[1] == arr[5] && arr[5] == arr[9])
            return 1;
        else if (arr[3] == arr[5] && arr[5] == arr[7])
            return 1;
        else if (arr[1] != '1' && arr[2] != '2' && arr[3] != '3' && arr[4] != '4' && arr[5] != '5' && arr[6] != '6' && arr[7] != '7' && arr[8] != '8' && arr[9] != '9')
            return 0;
        else
            return -1;
    }
};

int main()
{
    int i = -1, j;
    cout << "press 2 for 2 player else play with computer : " << endl;
    cin >> j;

    int count = 1;
    tic_tac_toe game;
    if (j != 2)
    {
        game.setarr();
        game.setname();
        game.getchoise();

        while (i == -1)
        {
            cout << "\n\n";
            if (count > 1)
            {
            cout << "************************************** " << count << "nd ROUND **************************************************" << endl;
            }
            count++;
            game.printboard();
            cout << endl;
            game.getnum();
            // delay(1000);
            game.comp();
            game.printboard();
            cout << endl;
            i = game.check_win();
        }
    }

    else
    {
        tic_tac_toe game2;
        game.setarr();
        // game.setname(i);
        // game.getchoise();
        while (i == -1)
        {
            cout << endl;
            game.printboard();
            cout << endl;
            cout << "\n\n";
            if (count > 1)
            {
            cout << "************************************** " << count << "nd ROUND **************************************************" << endl;
            }
            count++;
            game.getnum();
            // delay(1000);
            game.printboard();
            cout << endl;
            i = game.check_win();
            if (i != -1)
            {
                break;
            }
            game.getnum2();
            game.printboard();
            i = game.check_win();
        }
    }

    cout << "******************** GAME OVER **********************" << endl;
    cout << "thank you !! come again next time" << endl;
    return 0;
}