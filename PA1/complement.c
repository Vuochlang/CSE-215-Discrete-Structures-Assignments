#include "all.h"

void complement(char *A, char *B)
{   char product[120];
    int x=0;
    int flag=1;
    for(int i=0; i<strlen(A); i++)//loop to go through set A
    {   for(int j=0; j<strlen(B); j++)//loop to go through set B
        {   if(A[i]==B[j])//if there's an element in A that also in B, then set the flag and exit the loop
            {   flag=0;
                exit;   }
        }
        if(flag==1)//if there's an element in A that is not in B, then copy that element into the product
        {   product[x]=A[i];
            x++;
        }
        flag=1;
    }
    product[x]='\0';
    printf("A \\ B={");
    printset(product);//print the product of A complement B
}