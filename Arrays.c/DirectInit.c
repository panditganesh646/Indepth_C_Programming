/*
#include<stdio.h>
void main(){
     int a[4] = {9,3,1,8},i;
     printf("Elements are:");
     for(i=0;i<4;i++){
           printf("%4d",a[i]);
     }
}
*/

/*
#include<stdio.h>
void main(){
     int a[] = {9,3,1,8},i;
     printf("Elements are:");
     for(i=0;i<4;i++){
           printf("%4d",a[i]);
     }
}
*/

/*#include<stdio.h>
void main(){
     int a[] = {9,3,1,8},i;
     printf("Elements are:");
     for(i=0;i<4;i++){
         printf("%4d",i[a]);
     }
}*/

/*#include<stdio.h>
void main(){
     int a[] = {9},i;
     printf("Elements are:");
     for(i=0;i<4;i++){
         printf("%6d\n",i[a]);
     }
}*/


/*
#include<stdio.h>
void main(){
    int a[4] = {9},i;
    printf("Elements are:");
    for(i=0;i<4;i++){
         printf("%6d",i[a]);
    }
}
*/

/*#include<stdio.h>
void main(){
     int a[4]={  },i;
     printf("Elements are:");
     for(i=0;i<4;i++){
           printf("%6d",i[a]);
     }
}*/

/*#include<stdio.h>
void main(){
      int a[4] = {{1,2},{3,4}},i;
      printf("Elements are:");
      for(i=0;i<4;i++)printf("%6d",i[a]);
}
*/
/*#include<stdio.h>
void main(){
      int a[4]={{1},{2},{3},{4}},i;
      printf("Elements are:");
      for(i=0;i<4;i++){
            printf("%6d",i[a]);
      }
}*/

/*
#include<stdio.h>
void main(){
      int a[4]={1,2,3,4,5},i;
      printf("Elements are:");
      for(i=0;i<4;i++){
           printf("%6d",i[a]);
      }
}*/


/*
#include<stdio.h>
void main(){
      int a[4]={{1},2,3,4,5},i;
      printf("Elements are:");
      for(i=0;i<4;i++)printf("%6d",i[a]);
}
*/
/*
#include<stdio.h>
void main(){
      int a[4]={{1},2},i;
      printf("Elements are:");
      for(i=0;i<4;i++){
           printf("%6d",i[a]);
      }
}*/
/*
#include<stdio.h>
void main(){
      int a[4] = 9,i;
      printf("Elements are:");
      for(i=0;i<4;i++)printf("%6d",i[a]);
}c //Error


/*
#include<stdio.h>
void main(){
        int a[4]={'1','2','3','4'},i;
        printf("Elements are:");
        for(i=0;i<4;i++)printf("%6d",a[i]);
}*/

/*
#include<stdio.h>
void main(){
      int a[4]={1.1,2.2,3.3,4.4},i;
      printf("Elements are:");
      for(i=0;i<4;i++){
           printf("%6d",a[i]);
      }
}*/

/*
#include<stdio.h>
void main(){
      int a[4] = {1>2,4>3,3-1,40000},i;
      printf("Elements are:");
      for(i=0;i<4;i++){
           printf("%6d",a[i]);
      }
}*/
/*
#include<stdio.h>
void main(){
      int a[4] = {1,2, , 4},i;
      printf("Elements are:");
      for(i=0;i<4;i++){
           printf("%6d",a[i]);
      }
} */ //Error
/*
#include<stdio.h>
void main(){
      int a[4],i;
      printf("Elements are:");
      for(i=0;i<4;i++)printf("%6d",a[i]);
}
*/ //garbage values o/p


/*
#include<stdio.h>
void main(){
      static int a[4],i;
      printf("Elements are:");
      for(i=0;i<4;i++){
           printf("%6d",a[i]);
      }
}*/
/*
#include<stdio.h>
void main(){
      static int a[4],i;
      printf("Elements are:");
      for(i=0;i<4;i++){
             printf("%6d",a[i]);
      }
}*/


/*
#include<stdio.h>
void main(){
      int a[4],i;
      a[0]=9;
      printf("Elements are:");
      for(i=0;i<4;i++)printf("%6d",a[i]);
}
*/

/*
#include<stdio.h>
void main(){
      int a[4]={1},i;
      a[0]=9;
      printf("Elements are:");
      for(i=0;i<4;i++)printf("%6d",a[i]);
}*/


/*
#include<stdio.h>
void main(){
      int n=4, a[n]={1,2,3,4},i;
      printf("Elements are:");
      for(i=0;i<4;i++)printf("%6d",a[i]);

}
*/ //Error


/*
#include<stdio.h>
void main(){
      const int n=4,a[n]={1,2,3,4},i;
      printf("Elements are:");
      for(i=0;i<4;i++)printf("%6d",a[i]);

}*/ //Error



/*
#include<stdio.h>
#define n 4
void main(){
      int a[n] = {1,2,3,4},i;
      printf("Elements are:");
      for(i=0;i<4;i++)printf("%6d",a[i]);
}*/

/*
#include<stdio.h>
#define n 4
void main(){
      n=20;
      int a[n]={1,2,3,4},i;
      n=20;
      printf("Elements are:");
      for(i=0;i<4;i++)printf("%6d",a[i]);
}*/ //Error
