#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int i, c = 0, cn = 0, cnt = 0;
    char st[100];
    printf("Enter a string: ");
    gets(st);
    for(i = 0; i <= strlen(st); i++)
    {
        if((st[i] >= 65 && st[i] <= 90) || (st[i] >= 97 && st[i] <= 122))
        {
            c++;
        }
        else if(st[i] >= 48 && st[i] <= 57)
        {
            cn++;
        }
        else
        {
            cnt++;
        }
    }
    printf("The total number of alphabets, numbers and special characters are %d, %d and %d respectively.", c, cn, cnt);


    return 0;
}
