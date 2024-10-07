#include <stdio.h>

int main()
{
    int choice;
    printf("Welcome to our Quize game!!\n");
    do
    {
        printf("Choose a meny\n");
        printf("1. Quize\n");
        printf("0. Exit program\n");
        choice = checkInputMeny();
    } while (choice != 0);
    printf("Exit Program!");
    return 0;
}
int checkInputMeny()
{
    int choice;
    scanf("%i", &choice);
    switch (choice)
    {
    case 1:
        quize1();
        break;
        case 2:
        quize2();
        break;
        case 3:
        quize3();
        break;
        case 4:
        quize4();
        quize3();
        break;
    case 0:
        break;

    default:
        printf("Must be 1 or 0!\n");
        break;
    }
    return choice;
}
void checkQuizeAwnser(int amountOfAwnser, int rightAwnser)
{
    int choice;
    do
    {
        printf("Chose a number between 0 and %i\n", amountOfAwnser);
        scanf("%i", &choice);
        if (choice > 0 && choice <= amountOfAwnser)
        {
            printf("You are right\n");
        }
        else if (choice == 0)
            ;
        else
        {
            printf("I has to be between 0 and %i\n", amountOfAwnser);
        }
    } while (choice != rightAwnser);
}
void quize1()
{
    printf("Vilket sprak skrivs den här koden i?\n");
    printf("\t1: C \n\t2: Java \n\t3: Python \n\t4: Cobolt\n");
    checkQuizeAwnser(4,1);
}
void quize2()
{
    printf("Vem är best?\n");
    printf("1. Tony\n");
    printf("2. Tony\n");
    printf("3. Tony\n");
    checkQuizeAwnser(3, 1);
}
void quize3()
{
    printf("Vem spelade huvudrollen Bilbo i filmserien The Hobbit?\n");
    printf("\t1: Morgan Freeman \n\t2: Ian McKellen \n\t3:Martin Freeman \n\t4: Graham Mctavish\n");
    checkQuizeAwnser(4,3);
}
void quize4()
{
    printf("Vad heter den gröna lilla figuren i Star Wars?\n");
    printf("\t1: Obi-Wan \t\n2: Darth Vader \n\t3: Yaba Dahut \n\t4: Yoda\n");
    checkQuizeAwnser(4,4);
}