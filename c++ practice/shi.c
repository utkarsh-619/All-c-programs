#include<stdio.h>

struct emp
{
    int code;
    char name;
};


int main(){
    struct emp x[2];
    x[0].code=10;
    x[0].name='h';
    x[1].code=5;
    x[1].name='s';

    for(int i=0;i<2;i++){
        printf("%d  %c\n",x[i].code,x[i].name);

    }
}