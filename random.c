#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char rand_pick()  {
    int r;
    char r_pick;
    srand(time(NULL));
    r = rand()%9;
 /*   switch(r)   {
        case "r<3 && r>-1" :  pick = "rock";
        case "r>2 && r<5" :  pick = "paper";
        case "r>5 && r<9" :  pick = "scissors";
    }
*/
    if(r<3)    {
        r_pick = "rock";
    }
    else if(r>2 && r<5)     {
        r_pick = "paper";
    }
    else    {
        r_pick = "scissors";
    }
return(r_pick);
}
