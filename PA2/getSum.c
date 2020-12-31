#include "all.h"

void getsum(int startnum, int testnum)
{   int i=0, j=0, flag=0;
    for(i=0;i<testnum;i++)//loop to go through numbers to test
    {   flag=0;
        j=3;
        while(j<startnum && flag==0)//while loop to go get sum of 2 two primes
        {   if(isprime(j)==1)//call function isprime to check if a number is a prime
            {   if(isprime(startnum-j)==1)//check to see to if the remaining of the number from the deduction is prime
                {   printf("%d+%d=%d\n",j,startnum-j,startnum);//if it is, print out the output and set the flag to get out the loop
                    flag=1;
                    //exit;
                }
            }
            j++;//increase the number to test as prime by 1
        }
        if(flag==0)//if can't find any two primes that sum up to the "startnum"
        {       printf("%d the newspapers :)\n", startnum);
        }
        startnum=startnum+2;//go to the next even number
    }
}
