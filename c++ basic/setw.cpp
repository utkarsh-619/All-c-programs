#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<setw(2)<<n<<" *"<<setw(2)<<i<<" ="<<setw(3)<<(n*i)<<endl;
    }

    return 0;
}