#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

    //long limit = atol(argv[1]);

    int primeList[100000] = {2};

    clock_t startTime = clock();

    

    printf("time : %f\n", (float)((clock() - startTime))/CLOCKS_PER_SEC);
    //printf("%d\n", primeList[count-1]);

    return 0;
}
