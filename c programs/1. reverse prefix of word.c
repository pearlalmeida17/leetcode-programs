#include<stdio.h>
#include<string.h>


char* reversePrefix(char* word, char ch)
{
    int i,j,rev,len,k;
    char t;
    rev=0;

    len=strlen(word);
     for(i=0;i<len;i++)
    {
         if (word[i]==ch)
         {
            rev=i;
            break;
         }
    }


    if(rev>0)
    {
       for(j=0;j<=rev;j++)
      {
        if(j<=rev)
        {
           t = word[j];
           word[j] = word[rev];
           word[rev] = t;
           rev--;
        }
      }
    }


    printf("Output: %s\n", word);
    return word;
     
}

