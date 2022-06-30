#include<stdio.h>
#include<string.h>

struct worker{
    int code;
    float money;          // new data type name worker
    char name[10];
    char last_name[10];
};

void main(){

    struct worker w1;
    
    w1.code=45894;
    w1.money=54445.45;
    // w1.name="utkarsh";      did not work 
    strcpy(w1.name,"utkarsh");
    strcpy(w1.last_name,"awasthi");

    printf("%d\t%f\t%s %s",w1.code,w1.money,w1.name,w1.last_name);
}