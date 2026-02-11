#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, j;
    // const char *
    char string = "Riddhi";
    int n = (int)strlen(string);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%s", string,"");
        }
        printf("\n");
    }

    return 0;
}