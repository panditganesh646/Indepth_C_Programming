#include<stdio.h>
void main(){
     printf("%d\n",5==3, 7>3);
     printf("%d,%d\n",5==3,7>3);
     printf("%d\n",5==3&&7>3);
     printf("%d\n",5==3||7>3);
     printf("%d\n",3==3||7==3);
     printf("%d\n",'a'=='a'&&'b'>'B');
     printf("%d\n",!('a'=='a'));
}/*In && operation when left exp false, right exp not checked 
IN || operation when left exp true, right exp not checked*/