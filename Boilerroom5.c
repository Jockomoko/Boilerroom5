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
        break;
    case 0:
        return 0;
        break;

    default:
        printf("Must be 1 or 0!");
        break;
    }
}
void checkQuizeAwnser(int amountOfAwnser, int rightAwnser)
{
}
void quize1()
{
    printf("Vilket sprak skrivs den här koden i?\n");
    printf("\t1: C \n\t2: Java \n\t3: Python \n\t4: Cobolt\n");
    checkQuizeAwnser(4,1);
}
void quize2()
{
    printf("Vem är best?");
    printf("1. Tony");
    printf("2. Tony");
    printf("3. Tony");
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