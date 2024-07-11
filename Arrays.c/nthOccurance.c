#include<stdio.h>
void main(){
      int a[100],n,i,ele,found=0,occ;
      printf("Enter array size between 1-100:");
      scanf("%d",&n);
      printf("Enter %d elements:",n);
      for(i=0;i<n;i++)scanf("%d",&a[i]);
      printf("Enter the elements to search and occurence:");
      scanf("%d%d",&ele,&occ);
      for(i=0;i<n;i++){
            if(a[i]==ele)found++;
            if(found==occ){
                 printf("%d in %d cell %d time\n",ele,i+1,occ);
                 break;
            }
            if(found==0)printf("%d not found",ele);
            else if(found!=occ)printf("%d not found %d time",ele,occ);
      }


}