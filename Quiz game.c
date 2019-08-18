#include<stdio.h>
int main()
{
    int score=0,choice;
    printf("Welcome to the QUIZ GAME\n");
    printf("\nYou have Five Questions\nFor every right answer you will get 3 points and every wrong answer 1 point will deduct\n");

    printf("\n\nFirst Question Is:");
    printf("\n\nWhat is the nickname of Rickey Ponting?\n");
    printf("1.Pantar     2.Mr.Cricket\n3.Rickey     4.Blaster");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\nRight Answer:");
        score=score+3;
    }
    else
    {
        printf("\nWrong Answer:");
        score=score-1;
    }

    printf("\n\nSecond Question Is:");
    printf("\n\nWhat is the National Sport Of America?\n");
    printf("1.BasketBall    2.Hockey\n3.BaseBall      4.Cricket");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    if(choice==3)
    {
        printf("\nRight Answer:\n");
        score=score+3;
    }
    else
    {
        printf("Wrong Answer:\n");
        score=score-1;
    }

    printf("\n\nThird Question Is:");
    printf("\n\nWho discovered the 'The Law of Gravity'?");
    printf("\n1.Thomas Elva Edision      2.Aryabhatt\n3.Kalidas                  4.Sir Issac Newton");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    if(choice==4)
    {
        printf("\nRight Answer:");
        score=score+3;
    }
    else
    {
        printf("\nWrong Answer");
        score=score-1;
    }

    printf("\n\nFourth Question Is:");
    printf("\n\nIn Which year India Won ICC T20 World Cup?\n");
    printf("\n1.2009    2.2007\n3.2010    4.2011");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    if(choice==2)
    {
        printf("\nRight Answer");
        score=score+3;
    }
    else
    {
        printf("\nWrong Answer");
        score=score-1;
    }

    printf("\n\nFifth Question Is:");
    printf("\n\nWhere is going to be held next ICC World Cup?");
    printf("\n1.Australia           2.India\n3.England & Wales     4.South Africa");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    if(choice==3)
    {
        printf("\nRight Answer:");
        score=score+3;
    }
    else
    {
        printf("\nWrong Answer:");
        score=score-1;
    }

    printf("\nYour Total Score is=%d",score);

    return 0;

}
