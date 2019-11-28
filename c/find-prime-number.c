#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

    long limit = atol(argv[1]);

    int count = 1;
    int primeList[1000000] = {2};
    int i = 3;
    int flag = 1;
    printf("%d\n", count);

    clock_t startTime = clock();

    while(count < limit) {
        for(int k = 0; k < count; k++) {
            if((i % primeList[k]) == 0) {
                flag = 0;
                break;
            }
        }

        if(flag) {
            primeList[count] = i;
            count += 1;
            printf("%d\n", count);
        }

        i += 2;
        flag = 1;
    }

    printf("time : %f\n", (float)((clock() - startTime))/CLOCKS_PER_SEC);
    printf("%d\n", primeList[count-1]);

    return 0;
}
