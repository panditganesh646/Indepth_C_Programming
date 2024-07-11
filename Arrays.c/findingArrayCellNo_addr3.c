#include<stdio.h>
void main(){
    float a[4] = {9,3,1,8};;
    int i;
    for(i=0;i<4;i++){
           printf("a[%d] cell addr=%u, value=%.2f\n",i,&a[i],a[i]);
    }
}