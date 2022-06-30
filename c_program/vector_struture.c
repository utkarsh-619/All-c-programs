#include<stdio.h>
#include<string.h>

typedef struct vector{
    int x;
    int y;
}vector;

int sum_vector(vector *ptr1,vector *ptr2){
    int sumx,sumy;
    sumx=ptr1->x +(*ptr2).x;//ptr1->x is a another way to to use struture pointer
    sumy=(*ptr1).y +(*ptr2).y;

    printf("The sum of two vector if = (%d,%d)",sumx,sumy);
}


void main(){
    vector v1,v2;
    printf("Enter the first vector's value x and y axis axis : ");
    scanf("%d%d",&v1.x,&v1.y);

    printf("Enter thr second vector's value in x and y axis: ");
    scanf("%d%d",&v2.x,&v2.y);

    sum_vector(&v1,&v2);

}