#include "all.h"

void Union(char *A, char *B)
{   char product[120]; int flag=1;
    int lenA=0, lenU=0, a=0;

    lenA=strlen(A);
    for(a=0; a<lenA; a++)//loop to copy set A into the product
    {       product[a]=A[a];
    }
    for(int i=0; i<strlen(B); i++)//loop to go through in set B
    {   flag=1;
        for(int j=0; j<a; j++)//loop to go through in set A
        {   if(B[i]==A[j])//if an element exist in A and B, skip to the next element
            {   flag=0;
                exit;   }
        }
        if(flag==1)//if an element in B does not exist in A, copy into the product
        {   product[a]=B[i];
            a++;
        }
    }
    product[a]='\0';
    printf("A U B={");
    printset(product);//print the product of A union B
}