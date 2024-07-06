#include<stdio.h>
int main()
{
    int player_1;
    printf("player-1 picks number :");
    scanf("%d",&player_1);
    int chance_1;
    printf("player-2 guess the number:");
    scanf("%d",&chance_1);

    if(player_1==chance_1)
    {
        printf("Right,player-2wins!\n");
    }
    else
    {
        printf("Wrong, 2 chance(s)Left!\n");
        int chance_2;
        printf("Player 2 guess number 2nd time:");
        scanf("%d",&chance_2);
        if(player_1==chance_2)
        {
            printf("Right,player-2wins!\n");
        }
        else
        {
            printf("Wrong, 1 chance(s)Left!\n");
            int chance_3;
            printf("Player 2 guess number last time:");
            scanf("%d",&chance_3);
            if(player_1==chance_3)
            {
                printf("Right,player-2wins!\n");
            }
            else
            {
                printf("Wrong,0 chance(s)Left!\nplayer-1 wins!\n");
            }
        }
    }

    return 0;
}
