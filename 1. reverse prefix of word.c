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

    return word;
     
}

int main(){
   char word[] = "abcde\0";
   char ch = 'd';
   char *res = reversePrefix(word, ch);
   for(int i=0; i<strlen(res); i++) 
      printf("%c", res[i]);
   return 0;
}
