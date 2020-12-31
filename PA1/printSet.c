#include "all.h"

void printset(char* set)
{   for(int i=0; i<strlen(set);i++)//loop to go through the given string to print out the element with comma in between
    {   printf("%c",set[i]);
        if(++i && i<strlen(set))
        {   printf(",");
            --i;
        }
    }
    printf("}\n");
}