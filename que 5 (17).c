#include<stdio.h>
#include<conio.h>

int main()
{
    char a[50];
    int i;
    printf("Enter the string: ");
    gets(a);
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
    }
    printf("After the string is converted to lowercase: %s", a);


    return 0;
}
