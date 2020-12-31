#include "all.h"

void TurnToString (char *temp, char *set)
{   int length=strlen(temp);
    temp[length-1]='\0';
    int lenSet=0, same=0;

    if(temp!=NULL)//if the given string is not empty
    {   for (int i=0; i<length; i++)//loop to go through the string
        {   if(isspace(temp[i])==0)//if it is not a space
            {   if(lenSet==0)//if this is the first element to add into set
                {   set[lenSet]=temp[i];
                    lenSet++;
                }
                else//if this is not the first element to add into set
                {   same=0;
                    for(int j=0; j<=lenSet; j++)//loop to go through the set
                    {    if(temp[i]==set[j])//compare is an element is already in the set, if so, then skip to the next element
                        {       same=1;
                            exit;
                        }
                    }
                    if(same!=1)//if the element does not exist in the set
                    {   set[lenSet]=temp[i];
                        lenSet++;
                    }
                }
            }
        }
    }
    set[lenSet]='\0';
}