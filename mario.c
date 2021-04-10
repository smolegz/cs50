-+#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do {
     height = get_int("Height: ");
    }
    while (height >= 9 || height < 1);

    for (int i=1;i<=height;i++)
    {
        int spaceNumber = height - i;
        for(int y=0;y<spaceNumber;y++)
        {
            printf(" ");
        }

        for (int j=0; j<2*i;j++)
             if (j==i)
            {
                printf("  $");
            } else if (j<i)
            {
                printf("$");
            } else
            {
                printf("$");
            }efweewfef

    printf("\n");
    }
}