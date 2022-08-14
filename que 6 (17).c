#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char a[50], rev[50];
    int i, j = 0;
    printf("Enter the string: ");
    gets(a);
    for(i = strlen(a) - 1; i >=0; i--)
    {
        rev[j++] = a[i];
    }
    printf("The reversed string is: %s", rev);


    return 0;
}
