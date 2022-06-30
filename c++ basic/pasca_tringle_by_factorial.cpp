#include<iostream>
#include<iomanip>
using namespace std;

int fac(int a)
{
    if (a == 0)
    {
        return 1;
    }

    for (int i = a - 1; i >= 1; i--)
    {
        a = a * i;
    }
    return a;
}

int main(){
    int n;
    cout<<"Enter the number of row :";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int k=0;k<n-i;k++){
            cout<<"   ";
        }
        for(int j=0;j<=i;j++){
            cout<<"   "<<setw(3)<<fac(i) / (fac(j) * fac(i - j));
        }
        cout<<endl;

    }
    return 0;
}