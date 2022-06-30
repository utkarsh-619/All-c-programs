#include<iostream>
using namespace std;

int main(){
    int dec,bin=0,rim,temp=1;
    cout<<"Enter a decimal number : ";
    cin>>dec;

    // decimal to binary 
    while(dec>0){
        rim = dec%2;
        bin=bin+temp*rim;
        temp=temp*10;
        dec/=2;
    }
    cout<<"The binary number of "<<dec<<" is = "<<bin<<endl;



    temp=1;
    // binary to decimal
    while(bin>0){
        rim=bin%10;
        dec=dec+(temp*rim);
        temp=temp*2;
        bin/=10;
    }
    cout<<"The decimal number of "<<bin<<" is = "<<dec<<endl;

    return 0;
}