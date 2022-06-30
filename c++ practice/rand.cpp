#include<iostream>
using namespace std;

int positive (int x){
    if(x<0)  return (x*(-1));
    else     return x;
}

int main(){
    int x,num=0,sumb=0,sumc=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>x;
            if(j==1 && i==1){
                if(x!=5){
                    num=num+positive(x-5);
                }
            }
            else if(j%2==0 && i%2==0){
               sumb+=x;
            }
            else{
                sumc+=x;
            }
        }
        
    }

    num+=positive(sumb-20)+positive(sumc-20);
    cout<<num;
    // int x,sum=0;
    // for(int i=0;i<3;i++){
    //     for(int i=0;i<3;i++){
    //         cin>>x;
    //         sum+=x;
    //     }
    // }
    // cout<<positive(sum-45)
}