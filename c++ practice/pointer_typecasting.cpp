#include<iostream>
using namespace std;

int main(){
    int a=1025;
    int *ptr;
    ptr=&a;
    // cout<<"Addres = "<<ptr<<" , value = "<<*ptr<<endl;
    printf("Addres = %d , value = %d \n",ptr,*ptr);
    char *p1;
    p1=(char *)ptr;
    printf("Addres = %d , value = %d \n",p1,*p1);
    printf("Addres = %d , value = %d \n",p1+1,*(p1+1));
    // cout<<"Addres = "<<p1<<" , value = "<<*p1<<endl;

    return 0;
}