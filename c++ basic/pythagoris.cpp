#include<iostream>
using namespace std;

void cek(int a,int b,int c){
    if(a*a==(b*b)+(c*c))
        cout<<"satisfied";

    else
        cout<<"not satisfied";
}

int main(){
    int a,b,c,x,y,z;
    cout<<"Enter three value :";
    cin>>a>>b>>c;

    x=max(a,max(b,c));
    if(a==x){
        y=b;
        z=c; 

    }
    else if(b==x){
        z=c;
        y=a;
    }
    else{
        y=b;
        z=a;
    }

    // cout<<" The max num is = "<<x<<" and the others are ="<<y <<" "<<z;
    cek(x,y,z);

    return 0;
}