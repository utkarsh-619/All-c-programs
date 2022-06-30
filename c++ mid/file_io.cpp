#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream fin("file_io_sample.txt");
    string name;
    while(fin.eof()==0){   
        getline(fin,name);
        cout<<name<<endl;
    }
    fin.close();
    return 0;
}