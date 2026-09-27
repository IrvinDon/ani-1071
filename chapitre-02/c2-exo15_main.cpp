#include <cstdio>

int main()
{
    int r;
    scanf("%d", &r);

    for (int y = -r; y <= r; y++) //y a aussi des oordonées négatives d'ou le -r
    {
        for (int x = -r; x <= r; x++)//x a aussi des oordonées négatives d'ou le -r
        {
            printf("%s", x * x + y * y <= r * r ? "##" : "  ");
        }

        printf("\n");
    }

    return 0;
}