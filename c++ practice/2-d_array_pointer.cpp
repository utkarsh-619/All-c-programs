#include<iostream>
using namespace std;

int sumarr(int ptr[][3],int size){

}
    // int sum = 0;
    
    // for (int i=0 ; i<size;i++){
    //     sum+=*(*ptr+i);         // (*(*ptr)+i) is different
    //     // cout<<sum<<"\t\t"<<*(*ptr+i)<<endl;
    // }

    // for(int i=0;i<15;i++){
    //     cout<<(*(*ptr)+i)<<"\t\t"<<*(*ptr+i)<<endl;
    // }

//     for(int i=0 ;i<size/3;i++){
//         for(int j=0;j<3;j++){
//             sum+=ptr[i][j];
//         }
//     }
//     return sum;
// }

int main(){
    int arr[2][3]={{1,4,3},{4,5,5}};
    sumarr(arr,4);
    // int (*ptr)[3];
    // ptr=arr;
    // printf("%d\n%d",ptr,*(ptr+1));
    // cout<<endl<<(*(*ptr))<<endl<<(*(*(ptr+1)));
    // cout<<*(*ptr+5);

    // int size = sizeof(arr)/sizeof(arr[0][0]);
    // cout<<sumarr(arr,size);

    cout<<*(arr[0]+1);
    return 0;
}