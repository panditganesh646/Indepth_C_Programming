// 123 reverse is 321
#include<stdio.h>
void main(){
     int n=123;
     printf("%d reverse is %d",n,n%10);
     n = n/10;
     printf("%d%d",n%10,n/10);
}