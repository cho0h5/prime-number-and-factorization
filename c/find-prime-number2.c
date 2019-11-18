#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000000

int main(int argc, char *argv[]) {

    long limit = atol(argv[1]);

    int count = 1;
    int primeList[SIZE] = {1};
    primeList[0] = 0;
    primeList[1] = 0;
    int i = 3;
    int flag = 1;

    clock_t startTime = clock();

    while(count < limit) {
        int j;
        for(j = count + 1; primeList[j] == 0; j++) {
	}
            printf("%d\n", j);
	if(j > SIZE) {
            break;
	}
        for(int k = 0; k < SIZE; k += j) {
            primeList[k] = 0;
	}
    }

    printf("time : %f\n", (float)((clock() - startTime))/CLOCKS_PER_SEC);
    //printf("%d\n", primeList[count-1]);

    return 0;
}
