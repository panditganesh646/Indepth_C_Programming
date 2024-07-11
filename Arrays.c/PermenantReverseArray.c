//using temp variable

/*
#include<stdio.h>
void main(){
     int a[100],n,i;
     printf("Enter array size between 1-100: ");
     scanf("%d",&n);
     printf("Enter %d elements:",n);
     for(i=0;i<n;i++){
          scanf("%d",&a[i]);
     }
     for(i=0;i<n/2;i++){
         int t = a[i];
         a[i] = a[n-i-1];
         a[n-i-1] = t;
     }
     printf("\nElements in reverse order:");
     for(i=0;i<n;i++){
          printf("%4d",a[i]);
     }
}*/

//without using temp var:
#include<stdio.h>
void main(){
     int a[100],n,i;
     printf("Enter array size between 1-100: ");
     scanf("%d",&n);
     printf("Enter %d elements:",n);
     for(i=0;i<n;i++)scanf("%d",&a[i]);
     for(i=0;i<n/2;i++){
          a[i]=a[i]+a[n-i-1];
          a[n-i-1] = a[i]- a[n-i-1];
          a[i] = a[i]-a[n-i-1];
          printf("Elements in revese order:");
          for(i=0;i<n;i++){
             printf("%4d",a[i]);
          }
     }
}