#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()  {
    int i, n;
    time_t t;
    n = 5;
    srand((unsigned)time(&t));
    printf("%d\n", rand()%50);
    return(0);
}