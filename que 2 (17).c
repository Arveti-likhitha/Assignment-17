#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char a[50], ch;
    int i, count = 0;
    printf("Enter a string: ");
    gets(a);
    printf("Enter the character to find its frequency: ");
    scanf("%c", &ch);
    printf("\n");
    for(i = 0; i <= strlen(a); i++)
    {
        if(a[i] == ch)
        {
            count ++;
        }
    }
    printf("The number of times %c has repeated is %d", ch, count);


    return 0;
}
