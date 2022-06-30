#include<iostream>
using namespace std;



string ap(string s, string t, int k) {
    
    
    if(s.size()<t.size()){
        for(int i=0;i<t.size();i++){
            if(i>(s.size()-1)){
                if((t.size()-s.size())==k)  return "Yes";
                else    return "No";
            }
            
            if(s[i]==t[i])  continue;
            
            else{
                int sum=(s.size()-1) + (t.size()-1) - (2*i);
                if(sum==k)  return "Yes";
                else    return "No";
            }
        }
        
    }
    
    else if(s.size()>t.size()){
        for(int i=0;i<s.size();i++){
            if(i>(t.size()-1)){
                if((s.size()-t.size())==k)  return "Yes";
                else    return "No";
            }
            
            if(s[i]==t[i])  continue;
            
            else{
                int sum=(s.size()-1) + (t.size()-1) - (2*i);
                if(sum==k)  return "Yes";
                else    return "No";
            }
        }
    }
    if(s.size()==t.size()){
        if(((s.size()-1)*2)>=k)
        return "Yes";
        
        else  return "No";
    }
    return "Yes";

}

int main(){
    string s, t;
    int k;
    cin>>s>>t>>k;
    cout<<ap(s,t,k);
    return 0;
}