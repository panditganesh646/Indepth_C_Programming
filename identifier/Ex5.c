// 4.Spaces not allowed.
// #include<stdio.h>
// void main(){
//        int a   b;
// }//====>Error

// 5. Keywords not allowed.
// #include<stdio.h>
// void main(){
//        int float;
// }//===>

//6. Identifiers are case sensitive i.e. lower and upper case are different.
// #include<stdio.h>
// void main(){
//        int a=10,A=20;
//        printf("a = %d, A = %d\n",a,A);
// }



// 7.Duplicate identifiers not allowed in same function or block{}. But we can use same name in different function.


// #include<stdio.h>
// void main(){
//       int a = 10;//decleration
//       int a = 20;//decleration
//       printf("%d",a);
// } //===>Error:Redecleration of 'a' in function main

// #include<stdio.h>
// void main(){
//     int a = 10;//decleration
//     float a = 1.2;//decleration
//     printf("a = %d",a);
// }//===>Error:Redecleration of 'a' in function main

// 8.Name may contain up to 32 characters and excess characters ignored by the compiler.

// #include<stdio.h>
// void main(){
//        int abcdefghijklmnopqrstuvwxyz1234567890;
// }

#include<stdio.h>
void main(){
       int abcdefghijklmnopqrstuvwxyz1234567890;
       int abcdefghijklmnopqrstuvwxyz1234567890;
}//===>Error:Redecleration of 'abcdefghijklmnopqrstuvwxyz123456' in function main