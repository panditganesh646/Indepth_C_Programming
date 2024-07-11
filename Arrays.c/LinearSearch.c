#include<stdio.h>
void main(){
     int a[100],n,i,ele,found=0;
     printf("Enter array size between 1-100:");
     scanf("%d",&n);
     printf("Enter %d array elements:");
     for(i=0;i<n;i++){
           scanf("%d",&a[i]);
     }
     printf("Enter the element to search:");
     scanf("%d",&ele);
     for(i=0;i<n;i++){
           if(a[i]==ele)printf("%d in %d cell\n",ele,i+1,found=1);
     }
     if(found==0)printf("%d not found",ele);
}