
#include <stdio.h>
#include "NumClass.h"

// declare functions
int factorial(int x);

// function to calculate factorial
int factorial(int x)
{
    if(x == 0|| x==1)
    return 1;
    return (x *factorial(x-1));
}

// function to check if a number is an prime number
int isPrime(int a) {

    if (a < 1) 
        return 0; // Not a prime number
    if(a==1)
        return 1;// 1 is a prime number 

    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return 0; // Not a prime number
        }
    }

    return 1; // Prime number
}

// function to check if a number is a strong number
int isStrong(int a) 
{
    int ans = a;
    int digit;
    int sum = 0;

    while(a>0)
    {
        digit=a%10;
        sum=sum+factorial(digit);
        a = a/10;
    }
    return(ans == sum);

}

