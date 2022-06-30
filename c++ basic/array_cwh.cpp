#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    int *ptr;
    ptr = marks;
    // for(int i=0;i<5;i++){
    //     cout<<"Enter the marks of "<< i << "th student";
    //     cin>>marks[i];
    // }

    // cout<<"\n_____________________________________________________\n\n";
    // for(int i=0;i<5;i++){
    //     cout<<"The marks of first student is ="<< marks[i]<<endl;
    // }

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the marks of " << i + 1 << "th student: ";
        cin >> *(ptr + i);
    }

    cout << "\n\n\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "The marks of " << i + 1 << "th student = " << *(ptr+i) << endl;
    }

    return 0;
}