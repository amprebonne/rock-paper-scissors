// this is a rock-scissors-program
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
int main()  {
    int u_pick;
    printf("Choose randomly from 1st to 3rd alternative by entering the corresponding number:\n (1) rock\n (2) paper\n (3) scissors\n");
    scanf("%d", &u_pick);
    //printf("This is value of u_pick %d", u_pick);
    int r_pick = rand_pick();
    if (u_pick == 1 && r_pick == 1)    {
        printf("rock\n");
        printf("It's a draw");
    }
    else if (u_pick == 2 && r_pick == 2)    {
        printf("paper\n");
        printf("It's a draw");
    }
    else if (u_pick == 3 && r_pick == 3)    {
        printf("scissors\n");
        printf("It's a draw");
    }
    else if(u_pick == 1 && r_pick == 2)  {
        printf("paper\n");
        printf("wow, u WIN!!!");
    }
    else if(u_pick == 1 && r_pick == 3)  {
        printf("scissors\n");
        printf("wow, u WIN!!!");
    }
    else if(u_pick == 2 && r_pick == 3)  {
        printf("scissors\n");
        printf("u loose");
    }
    else if(u_pick == 2 && r_pick == 1)  {
        printf("rock\n");
        printf("u loose");
    }
    else if(u_pick == 3 && r_pick == 1)   {
        printf("rock\n");
        printf("u loose");
    }
    else if(u_pick == 3 && r_pick == 2)   {
        printf("paper\n");
        printf("wow, u WIN!!!");
    }
    else    {
        printf("Incorrect input");
    }
    return (0);
}