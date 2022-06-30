#include <iostream>
#include <ctime>
using namespace std;

int cash = 100;
char b[3] = {'K', 'Q', 'J'};

int play()
{
    int x;
    for (int i = 0; i < 5; i++)
    {
        srand(time(NULL));
        x = rand() % 2;
        char temp;

        temp = b[x];
        b[x] = b[x + 1];
        b[x + 1] = temp;
    }
    cout << "Now tell me where you want to bat 1,2 or 3 :";
    cin >> x;
    cout << "you get "<<b[x - 1]<<endl;
    if (b[x - 1] == 'K')
        return 1;
    else
        return 0;
}

int main()
{
    int x = 0, bat, count = 3;
    cout<<"Your money is = "<<cash<<endl;
    lebel:
    cout << "Enter your batting amount : ";
    cin >> bat;
    while (!x && count > 0)
    {
        count--;
        if (bat <= cash)
        {
            x = play();
        }
        else
        {
            cout << "your money is over ";
            break;
        }
    }
    if (x)
    {
        cout << "You win ::" << endl;
        cash += bat;
        cout << "Now your money is = " << cash << endl;
    }
    else
    {
        cout << "You lose ::" << endl;
        cash -= bat;
        cout << "Now your money is = " << cash << endl;
    }
    int choice;
    cout<<"If you want to play again press 1 otherwise 0 : ";
    cin>>choice;
    if(choice){
        x=0,count=3;
        goto lebel;

    }

    return 0;
}