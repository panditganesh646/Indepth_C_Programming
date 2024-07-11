
#include<stdio.h>
void main(){
      int a[100],n,i;
      printf("Enter array size between 1-100 ");
      scanf("%d",&n);
      if(n<1||n>100)puts("Array size 1-100 only");
      else{
            printf("Enter %d elements ",n);
            for(i=0;i<n;i++)scanf("%d",&a[i]);
            printf("Elements are:");
            for(i=0;i<n;i++)printf("%6d",a[i]);
      }
}