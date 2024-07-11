#include<stdio.h>
void main(){
     float a[100],s=0;
     int n,i;
     printf("Enter array size:");
     scanf("%d",&n);
     printf("Enter %d array elements:",n);
     for(i=0;i<n;i++){
         scanf("%d",&a[i]);
         s+=a[i];
     }
     printf("Elements sum = %.2f ,Average = %.2f",s,s/n);
}