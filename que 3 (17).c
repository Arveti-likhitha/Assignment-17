#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char a[50];
    int i, count = 0;
    printf("Enter the string: ");
    gets(a);
    for(i = 0; i <= strlen(a); i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            count++;
        }
    }
    printf("The number of vowels in the given string is: %d.", count);


    return 0;
}

