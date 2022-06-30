#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
      cin>>arr[i];
    } 
    sort(arr,arr+n);
    int i=0;
    
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n\n";
   for(int i=0;i<n;i++){
       int sn=0,x=0,cut=arr[i];
        for(int j=i;j<n;j++){        
            // cout<<n<<" "<<j<<" "<<i<<endl;
            arr[j]=arr[j]-cut;
            sn++;
            if(arr[j]==0 && i!=j){
                x++;
            }
        }
        i=i+x;
        cout<<sn<<endl;
    }
    
    
    return 0;
}