#include<stdio.h>
void main(){
     int a[100],n,i;
     printf("Enter array size between 1-100:");
     scanf("%d",&n);
     printf("Enter %d elements:",n);
     for(i=0;i<n;i++)scanf("%d",&a[i]);
     printf("\nElements in reverse order:");
     for(i=n-1;i>=0;i--)printf("%4d",a[i]);
}