#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int usrScore = 0, compScore = 0;
void checkOptions(int usr, int comp)
{
    // 1 = Scissor 2 = Paper 3 = Rock
    if (usr == comp)
    {
        printf(" ---------------------------\n");
        printf("|         Its a tie         |\n");
        printf(" ---------------------------\n");
    } //========================================================
    else if (usr == 1)
    {
        if (comp == 2)
        {
            printf(" ---------------------------\n");
            printf("|          You Won :)       |\n");
            printf("| You : Scissor             |\n");
            printf("| computer : Paper          |\n");
            printf(" ---------------------------\n");
            usrScore++;
        }
        else
        {
            printf(" ---------------------------\n");
            printf("|          You Lose :(      |\n");
            printf("| You : Scissor             |\n");
            printf("| computer : Rock           |\n");
            printf(" ---------------------------\n");
            compScore++;
        }
    } //==========================================================
    else if (usr == 2)
    {
        if (comp == 1)
        {
            printf(" ---------------------------\n");
            printf("|          You Lose :(       |\n");
            printf("| You : Paper               |\n");
            printf("| computer :Scissor         |\n");
            printf(" ---------------------------\n");
            compScore++;
        }
        else
        {
            printf(" ---------------------------\n");
            printf("|          You Won :(       |\n");
            printf("| You : Paper               |\n");
            printf("| computer : Rock           |\n");
            printf(" ---------------------------\n");
            usrScore++;
        }
    } //===========================================================
    else if (usr == 3)
    {
        if (comp == 1)
        {
            printf(" ---------------------------\n");
            printf("|          You Won :)       |\n");
            printf("| You : Rock                |\n");
            printf("| computer :Scissor         |\n");
            printf(" ---------------------------\n");
            usrScore++;
        }
        else
        {
            printf(" ---------------------------\n");
            printf("|          You Lose :(      |\n");
            printf("| You : Rock                |\n");
            printf("| computer : Paper          |\n");
            printf(" ---------------------------\n");
            compScore++;
        }
    } //===========================================================
    else if (usr == 4)
    {
        printf(" ---------------------------\n");
        if (usrScore > compScore)
            printf("|          You Won :)       |\n");
        else if (usrScore < compScore)
            printf("|          You Lose :(      |\n");
        else
            printf("|         Its a tie        |\n");
        printf("|         Final Score      |\n");
        printf("| You : %d                  |\n", usrScore);
        printf("| computer : %d             |\n", compScore);
        printf(" ---------------------------\n");
        printf("\a");
    }
    else
    {
        Beep(750, 500);
        printf("\n Invalid Option");
    }
}
int main()
{
    int userChoice, compChoice;
    srand(time(0));
    printf("\t\t\t\t==========*Welcome to Rock, Paper & Scissor Game ==========");
    while (userChoice != 4)
    {
        printf("\nPlease select the option: ");
        printf("\n1.Scissor");
        printf("\n2.Paper");
        printf("\n3.Rock");
        printf("\n4.Quit\n");
        scanf("%d", &userChoice);

        compChoice = (rand() % 3) + 1;
        checkOptions(userChoice, compChoice);
    }
}