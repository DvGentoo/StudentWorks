#include <stdio.h>

char getSymbol(void);
int getPositiveNumber(void);
int pyramid(char symbol,int height);

int main()
{
    printf("Please enter symbol: ");
    char symbol = getSymbol();

    printf("Please enter height of pyramid: ");
    int height = getPositiveNumber();

    pyramid(symbol,height);

    return 0;
}

char getSymbol(void)
{
    char symbol;
    scanf("%c",&symbol);
    return symbol;
}

int getPositiveNumber(void)
{
    int number;
    int countCall = 0;

    do
    {
        if(countCall != 0)
        {
            printf("Try repeat: ");
            scanf("%i",&number);
            continue;
        }
        scanf("%i",&number);
    }
    while(number < 0 && number == NULL);
}

int pyramid(char symbol,int height)
{
    int i, j, k;

    for(i = 1; i <= height; i++)
    {
        for(j = 1; j <= height - i; j++)
            printf(" ");

        for(k = 1; k <= i; k++)
            printf("%c",symbol);

        printf("\n");
    }
}
