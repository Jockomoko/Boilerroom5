#include <stdio.h>

int main()
{
    int choice;
    printf("Welcome to our Quize game!!");
    do
    {
        printf("Choose a meny");
        printf("1. Quize");
        printf("0. Exit program");
        checkInputMeny(choice);
    } while (choice != 0);

    return 0;
}
int checkInputMeny(int choice)
{
    scanf("%i", &choice);
    switch (choice)
    {
    case 1:
        quize();
        break;
    case 0:
        return 0;
        break;

    default:
        printf("Must be 1 or 0!");
        break;
    }
}
void checkQuizeAwnser()
{
}
void quize()
{
}