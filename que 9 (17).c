#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int i, j, l;
    char ch, st[50];
    printf("Enter the string: ");
    gets(st);
    l = strlen(st);
    for(i = 0; i < l; i++)
    {
        for(j = 0; j < l-1; j++)
        {
            if(st[j] > st[j+1])
            {
                ch = st[j];
                st[j] = st[j+1];
                st[j+1] = ch;
            }
        }
    }
    printf("The strinf in the ascending order is: %s", st);


    return 0;
}
