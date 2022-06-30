#include<iostream>
using namespace std;

int main(){
    int dec,oct=0,rim,temp=1;
    cout<<"Enter a decimal number : ";
    cin>>dec;

    // decimal to octal
    while(dec>0){
        rim = dec%8;
        oct=oct+temp*rim;
        temp=temp*10;
        dec/=8;
    }
    cout<<"The octal number of "<<dec<<" is = "<<oct<<endl;



    temp=1;
    // octal to decimal
    while(oct>0){
        rim=oct%10;
        dec=dec+(temp*rim);
        temp=temp*8;
        oct/=10;
    }
    cout<<"The decimal number of "<<oct<<" is = "<<dec<<endl;

    return 0;
}