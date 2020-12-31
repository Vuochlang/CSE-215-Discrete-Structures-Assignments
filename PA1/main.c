#include "all.h"

int main ()
{   char temp[120]; char A[120]; char B[120];
    int lenA=0, lenB=0;

    printf("Enter set A: ");//get set A from user
    fgets(temp,120,stdin);
    TurnToString(temp,A);//call function to turn input into set A

    printf("Enter set B: ");//get set B from user
    fgets(temp,120,stdin);
    TurnToString(temp,B);//call function to turn input into set B

    printf("A={");
    printset(A);//print set A

    printf("B={");
    printset(B);//print set B

    lenA=strlen(A);
    lenB=strlen(B);

    printf("|A|=%d , ", lenA);//print number of elements in set A
    printf("|B|=%d\n", lenB);//print number of elements in set A

    Union(A,B);//get the product of A uion B
    Intersection(A,B);//get the product of A intersect B
    complement(A,B);//get the product of A complement B
    printf("Goodbye!\n");
    return 0;
}