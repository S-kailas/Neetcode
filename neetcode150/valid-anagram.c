#include <stdio.h>
#include <string.h>

int anagram(char string1[],char string2[]);

int main()
{
    char string1[]="racecarr";
    char string2[]="carrace";

    int value=anagram(string1,string2);

    if (value==1)
    {
        printf("Given two strings are anagram\n");
        
    }
    else
    {
    printf("Given two strings are not anagram\n");
    }
}

int anagram(char string1[],char string2[])
{
   
    int freq1[26]={0};
    int freq2[26]={0};
    
    for (int i=0;i<strlen(string1);i++)
    {
        freq1[string1[i]-'a']++; 
    }

    for (int i=0; i<strlen(string2);i++)
    {
        freq2[string2[i]-'a']++;
    }

    if (freq1>0 && freq2>0)
    {
        for (int i=0;i<26;i++)
        {
            if (freq1[i] != freq2[i])
            {
                return 0;
            }
        }
        return 1;
    }
}