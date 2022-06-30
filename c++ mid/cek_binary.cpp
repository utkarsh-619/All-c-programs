#include <iostream>
using namespace std;

class binary
{
private:
    string s;

public:
    void getbin();
    void checkbin();
    void displaybin();
    void onescom();

};

void binary::getbin(){
    cout<<"Enter the binary number : ";
    cin>>s;
}

void binary::checkbin(){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!='1' && s[i]!='0'){
            cout<<"Incorrect binary number ";
            exit(0);
        }
    }
}

void binary::displaybin(){
    cout<<"\n\nYour binary number is = ";
    for(int i=0;s[i]!='\0';i++){
        cout<<s[i];
    }
}
void binary::onescom(){
    checkbin();
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='1'){
            s[i]='0';
        }
        else{
            s[i]='1';
        }
    }


}

int main()
{
    binary x;
    x.getbin();
    x.displaybin();
    x.onescom();
    x.displaybin();

    return 0;
}