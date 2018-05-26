/*
 ============================================================================
 Name        : Encrypting & Decrypting Data program.c
 Author      : Me
 Version     :
 Copyright   : Your copyright notice
 Description : Enforcing Privacy with Cryptography in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int number;
    unsigned int reverse = 0;
    unsigned int a = 0;
    unsigned int b = 0;
    unsigned int c = 0;
    unsigned int d = 0;
    unsigned int i = 1;
    unsigned int option = 0;


    printf("Enter the 4 digit number: ");
    scanf("%u",&number);

    printf("Select an option:\n1.Encrypt\n2.Decrypt\nOption: ");
    scanf("%u", &option);

    while(i <= 4){
       reverse = number % 10;
       number /= 10;

       if(i == 1)
          d = reverse;
       else if(i == 2)
          c = reverse;
       else if(i == 3)
          b = reverse;
       else if(i == 4)
          a = reverse;

       i++;
    }

    if(option == 1){
       a = (a + 7) % 10;
       b = (b + 7) % 10;
       c = (c + 7) % 10;
       d = (d + 7) % 10;
    }else if(option == 2){
       a = (a + 3) % 10;
       b = (b + 3) % 10;
       c = (c + 3) % 10;
       d = (d + 3) % 10;
    }

    printf("%u%u%u%u\n",c,d,a,b);

    return 0;
}
