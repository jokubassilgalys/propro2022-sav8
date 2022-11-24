#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*masyvo uzpildymas atsitiktiniais skaiciais naudojant masyvo indeksus*/

int* createArray(int data[], int size, int low, int high)
{
    if(size > 0 && low < high){
        for(int i = 0; i < size; ++i){
            data[i] = (rand() % (high - low + 1)) + low;
            printf("%d ", data[i]);
        }

        return &data[0];
    }
    else{
        return NULL;
    }
}

int main()
{
    int size, low, high;
    int data[sizeof(int)*size];

    srand(time(NULL));
    printf("%d", createArray(data, size, low, high));

    return 0;
}