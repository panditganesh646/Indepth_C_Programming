#include<stdio.h>
void main(){
     int a[] = {10,12,25};
     printf("%d bytes\n",sizeof(a));
     printf("%d cells\n",sizeof(a)/sizeof(int));
     printf("%d cells\n",sizeof(a)/sizeof(a[0]));
}