/**
 * Module: Lab Programs
 * Problem: File Copy Program
 * 
 * Description:
 * This program copies the contents of one file to another file character by character.
 */

#include <stdio.h>

int main()
{
    char inputFilename[100];
    char outputFilename[100];
    int ch; // Using int to correctly handle EOF
    FILE *inputFile, *outputFile;

    printf("\nEnter the input file name: ");
    if (scanf("%99s", inputFilename) != 1) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    printf("\nEnter the output file name: ");
    if (scanf("%99s", outputFilename) != 1) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    inputFile = fopen(inputFilename, "r");
    if (inputFile == NULL)
    {
        printf("\nError: Cannot open input file\n");
        return 1;
    }

    outputFile = fopen(outputFilename, "w");
    if (outputFile == NULL)
    {
        printf("\nError: Cannot open output file\n");
        fclose(inputFile);
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF)
    {
        fputc(ch, outputFile);
    }

    printf("\nFile copied successfully\n");
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
