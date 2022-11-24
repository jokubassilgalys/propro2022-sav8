#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*masyvo uzpildymas atsitiktiniais skaiciais naudojant rodykles*/

int* createArray(int data[], int size, int low, int high)
{
    int* ptr;

    if(size > 0 && low < high){
        for(int i = 0; i < size; ++i){
            ptr = data + i;
            *ptr = (rand() % (high - low + 1)) + low;
            printf("%d ", *ptr);
        }
        
        return data;
    }
    else{
        return NULL;
    }
}

int main()
{
    int size = 10, low = 5, high = 89;
    int data[sizeof(int)*size];

    srand(time(NULL));
    printf("%d", createArray(data, size, low, high));

    return 0;
}