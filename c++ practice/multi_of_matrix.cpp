#include<iostream>
#include<iomanip>
using namespace std;

int ans[10][10];

void print_mat(int arr[][10],int x , int y){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<setw(3)<< (*((*(arr+i))+j))<<"     ";
        }
        cout<<endl<<endl;
    }
}

int main(){
    
    int r1,c1,r2,c2;
    int arr2[10][10];
    int arr1[10][10];


    cout<<"Enter the row and colem for first matrix : ";
    cin>>r1>>c1;

    cout<<"Enter the row and colem for second matrix : ";
    cin>>r2>>c2;

    if(c1!=r2 || r1<=0 || c1<=0 || r1>10 || c1>10 || r2<=0 || c2<=0 || r2>10 || c2>10 ){
        cout<<"::: error 404 found ::: "<<endl;
        exit (0);
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<"Enter the value of element "<<i+1<<","<<j+1<<" of first matrix : ";
            cin>>arr1[i][j];
        }
    }

    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<"Enter the value of element "<<i+1<<","<<j+1<<" of second matrix : ";
            cin>>arr2[i][j];
        }
    }
    
    cout<<"\n\nYour first matrix is :"<<endl;
    print_mat(arr1,r1,c1);

    cout<<"\n      *****           \n\n";

    cout<<"\n\nYour second matrix is :"<<endl;
    print_mat(arr2,r2,c2);

    cout<<"\n\n\n your answer is = \n";
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            for(int k = 0; k < c1; k++)
            {
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }
            cout<<setw(3)<< (*((*(ans+i))+j))<<"     ";
        }
        cout<<endl;
    }
    return 0;
}