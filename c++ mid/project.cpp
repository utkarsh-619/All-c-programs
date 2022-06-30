#include <iostream>
#include <math.h>
using namespace std;

class calculator
{
protected:

    float num1, num2;

public:
    void setdata(float x)
    {
        num1 = x;
    }
    void setdata(float x, float y)
    {
        num1 = x;
        num2 = y;
    }

    float answer(char op)
    {
        switch (op)
        {
        case '+':
            return (num1 + num2);
            break;

        case '-':
            return (num1 - num2);
            break;

        case '*':
            return (num1 * num2);
            break;

        case '/':
            return (num1 / num2);
            break;

        default:
            cout << "No match case !!!!" << endl;
        }
    }
};

class scientific_calculator : public calculator
{

public:
    int getchoice()
    {
        int x = 1;
    up:
        cout << "Enter your choice , 1 for nCr , 2 for power , 3 for squreroot and 4 for arr : " << endl;
        cin >> x;
        if (x != 1 && x != 2 && x != 3 && x != 4)
        {
            cout << "Wrong choice " << endl;
            goto up;
        }
        return x;
    }

    float process(int num)
    {
        float ans = 1;
        switch (num)
        {

        case 1:
        {
            if (num1 < num2)
            {
                cout << "Invalid input";
                return 0;
            }
            ans = (factorial(num1)) / (factorial(num1 - num2) * factorial(num2));
            break;
        }

        case 2:
        {
            for (int i = 0; i < num2; i++)
            {
                ans *= num1;
            }
            break;
        }

        case 4:
            ans = (num1 * num1);
            break;

        case 3:
            ans = sqrt(num1);
            break;
        }
        return ans;
    }

    int factorial(int x)
    {
        if (x == 0)
        {
            return 1;
        }
        int fac = 1;
        for (int i = 1; i <= x; i++)
        {
            fac *= i;
        }
        return fac;
    }
};

int main()
{
    float x, y;
    cout << "Enter first number : ";
    cin >> x;
    char op;
    cout << "Enter your operation : ";
    cin >> op;
    cout << "Enter second number : ";
    cin >> y;

    calculator calc;
    calc.setdata(x, y);
    cout << "Your answer is = " << calc.answer(op) << endl;

    scientific_calculator sc;
    int a = sc.getchoice();
    if (a == 3 || a == 4)
    {
        cout << "Enter a number ";
        cin >> x;
        sc.setdata(x);
        goto down;
    }
    cout << "Enter first number : ";
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;
    sc.setdata(x, y);
down:
    cout << "Your answer is = " << sc.process(a) << endl;

    return 0;
}