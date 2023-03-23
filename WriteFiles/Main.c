#include <stdio.h>

int main(int argc, char const *argv[])
{

    FILE *pFile = NULL;


    // Write mode (clears the file first)
    pFile = fopen(".\\WriteFiles\\test.txt", "w");

    fprintf(pFile, "amongus");

    fclose(pFile);


    // Append mode (appends onto the file)
    pFile = fopen(".\\WriteFiles\\test.txt", "a");

    fprintf(pFile, "amongus");

    fclose(pFile);


    // if (remove("./test.txt") == 0)
    // {

    //     printf("File was deleted");

    // } else
    // {

    //     printf("File was NOT deleted");

    // }

    return 0;
}
