#include<stdio.h>
void main(){
      int a =2.3;//implicit type casting
      float b = 2;
      printf("a = %d\n",a);
      printf("b = %f\n",b);
      printf("%f\n",(float)5/2); //Explicit type casting
      printf("%f\n",5/(float)2);
      printf("%f\n",(float)(5/2));
}