#include<stdio.h>
void main(){
    if(100==100)printf("Equal\n"); 
    else printf("Not Equal\n");
    if("ab"=="ab")printf("Equal\n");
    else printf("Not Equal\n");
    if(strcmp("ab","ab")==0)printf("Equal\n");
    else printf("Not Equal\n");
}