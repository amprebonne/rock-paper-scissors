// this is a rock-scissors-program
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
int main()  {
    char u_pick;
    printf("Choose between rock , paper & scissors :\n");
    scanf("%s", u_pick);
    char r_pick = rand_pick;
    for (u_pick == r_pick)    {
        printf("%s", r_pick);
        printf("It's a draw");
    }
    else if(u_pick == "rock" && r_pick == "paper")  {
        printf("%s", r_pick);
        printf("wow, u WIN!!!");
    }
    else if(u_pick == "rock" && r_pick == "scissors")  {
        printf("%s", r_pick);
        printf("u loose");
    }
    else if(u_pick == "paper" && r_pick == "scissors")  {
        printf("%s", r_pick);
        printf("u loose");
    }
    else if(u_pick == "paper" && r_pick == "rock")  {
        printf("%s", r_pick);
        printf("u loose");
    }
    else if(u_pick == "scissors" && r_pick == "rock")   {
        printf("%s", r_pick);
        printf("u loose");
    }
    else if(u_pick == "scissors" && r_pick == "paper")   {
        printf("%s", r_pick);
        printf("wow, u WIN!!!");
    }
    return (0);
}