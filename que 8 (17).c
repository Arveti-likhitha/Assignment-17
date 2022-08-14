#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int i, j = 0;
    char st[50], st1[50];
    printf("Enter the string: ");
    gets(st);
    for(i = 0; i <= strlen(st); i++)
    {
        st1[j++] = st[i];
    }
    printf("The copied string is: %s", st1);


    return 0;
}
