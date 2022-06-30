#include <iostream>
#include <cstdlib>

using namespace std;
char arr[10];
string name;
char ch;

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
            cout << "\t\t\t\t\t\t\t\t      |       |      " << endl;
            cout << "\t\t\t\t\t\t\t\t  " << arr[i + 1] << "   |   " << arr[i + 2] << "   |  " << arr[i + 3] << "   " << endl;
            if (i != 6)
                cout << "\t\t\t\t\t\t\t\t______|_______|______" << endl;

            else
                cout << "\t\t\t\t\t\t\t\t      |       |      " << endl;
        }
    }

    void setname()
    {

        cout << "Etner your name : ";
        cin >> name;
    }

    void getchoise()
    {
        cout << name << ", now tell me what charecter you want to use O/X : ";
        cin >> ch;
    }

    void getnum()
    {
        int x;
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

        cout<<arr[x]<<"\t\t"<<x<<endl;

        if (arr[x]==(48+x))
        {
            
            arr[x] = ch;
            cout<<"runed"<<endl;
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

    void comp()
    {
    }

    int check_win()
    {
    }


int main()
{    
    setarr();
    setname();
    getchoise();
    printboard();
    getnum();
    printboard();
    return 0;
}