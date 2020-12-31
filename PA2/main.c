#include "all.h"

int main()
{   int startnum=0,testnum=0, testresult=0;
    char str[100];
    printf("Enter a starting number: ");//get input from user for the starting number
    fgets(str,100,stdin);
    sscanf(str,"%d",&startnum);
    if(startnum%2!=0)//check to see if it is even number, if not then exit
    {   printf("Error: Number should be an even number\n");
        return 0;
    }
    printf("Enter how many number to test: ");//get input from user for the number(s) to test
    fgets(str,100,stdin);
    sscanf(str,"%d",&testnum);
    if(testnum<0)//check if the second input is negative, if it is negative, exit
    {   printf("Error: Number to test must be positive\n");
        return 0;
    }
    getsum(startnum,testnum);//call the function and use the starting number to get the sum of two primes number
    return 0;
}
