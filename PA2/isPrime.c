#include "all.h"

int isprime(int num)
{       unsigned int divisor=2;
    for(divisor=2;divisor<num/2;divisor++)
    {       if(num%divisor==0)
        {       return 0; //not prime
        }
    }
    return 1; //is prime
}