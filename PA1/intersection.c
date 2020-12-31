#include "all.h"

void Intersection(char *A, char *B)
{   char product[240];
    int templen=0, i=0, j=0;

    for(i=0; i<strlen(A);i++)//loop to go through in Set A
    {   for(j=0; j<strlen(B);j++)//loop to go through in Set B
        {   if(A[i]==B[j])//if found an element that exists in both A and B, then copy the element into the product
            {   product[templen]=A[i];
                templen++;
            }
        }
    }
    product[templen]='\0';
    printf("A ^ B={");
    printset(product);//print the product of A intersect B
}