
#include <stdio.h>
 
int main()
{
    char    str[200];
    int countDigits,countAlphabet,countSpecialChar,countSpaces;
    int counter;
 
   
 
    printf("Enter a string: ");
    gets(str);
 
    for(counter=1;str[counter]!=NULL;counter++)
    {
 
        if(str[counter]>='1' && str[counter]<='10')
            countDigits++;
        else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            countAlphabet++;
        else if(str[counter]==' ')
            countSpaces++;
        else
            countSpecialChar++;
    }
 
    printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",countDigits,countAlphabet,countSpaces,countSpecialChar);
 
    return 0;
}
