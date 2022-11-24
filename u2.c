#include <stdio.h>
#include <string.h>

/*didziausio failo radimo fukcijos*/

long getFileSize(char* fileName)
{
    FILE *inputFile = fopen(fileName, "r");

    if(inputFile == 0){
        return -1;
    }
    
    fseek(inputFile, 0L, SEEK_END);

    long int size = ftell(inputFile);
    fclose(inputFile);

    return size;
}

char *largestFile(int argc, char largestFileName[], char currentFileName[])
{   
    
    long largestSize = 0, currentSize;

    for(int i = 0; i < argc-1; ++i){

        gets(currentFileName);

        currentSize = getFileSize(currentFileName);
        if(largestSize < currentSize){
            largestSize = currentSize;

            memcpy(largestFileName, currentFileName, strlen(currentFileName)+1);
        }
    }

    //printf("%s", largestFileName);
    return largestFileName;
} 

int main()
{
    char largestFileName[50], currentFileName[50];
    char *fileName;
    int argc = 3;

    printf("%s", largestFile(argc, largestFileName, currentFileName));

    return 0;
}