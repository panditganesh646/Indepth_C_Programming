#include<stdio.h>
void main(){
       int a[100],n,i,max,min;
       printf("Enter array size:");
       scanf("%d",&n);
       printf("Enter %d array elements:");
       for(i=0;i<n;i++){
            scanf("%d",&a[i]);
       }
       max=min=a[0];
       for(i=0;i<n;i++){
             if(max<a[i]){
                  max=a[i];
             }
             if(min>a[i]){
                   min=a[i];
             }
       }
       printf("Max=%d, Min=%d",max,min);
}