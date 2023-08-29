#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rand_pick()  {
    int r, r_pick;
    srand(time(NULL));
    r = rand()%9;
 /*   switch(r)   {
        case "r<3 && r>-1" :  pick = "rock";
        case "r>2 && r<5" :  pick = "paper";
        case "r>5 && r<9" :  pick = "scissors";
    }
*/
    if(r<3)    {
        r_pick = 1;
    }
    else if(r>2 && r<5)     {
        r_pick = 2;
    }
    else    {
        r_pick = 3;
    }
    //printf("random number is %d", r_pick);
return(r_pick);
}
