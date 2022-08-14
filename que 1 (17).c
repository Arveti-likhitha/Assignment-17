#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    char a[50];

    printf("Enter the string: ");
    scanf("%s", a);
    for(i = 0; a[i] != '\0'; i++);

    printf("The length of the entered string is: %d", i);

    return 0;
}
