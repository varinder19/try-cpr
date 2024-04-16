#define _CRT_SECURE_NO_WARNINGS

#define BUFFER_SIZE 80

#include "Converting.h"
#include "Converting.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void converting(void) {
    /* Version 1 */
    printf("*** Start of Converting Strings to int Demo ***\n");

    char intString[BUFFER_SIZE];
    int intNumber;

    do {
        printf("Type an int numeric string (q to quit):\n");

        fgets(intString, BUFFER_SIZE, stdin);
        intString[strlen(intString) - 1] = '\0';

        if (strcmp(intString, "q") != 0) {
            intNumber = atoi(intString);
            printf("Converted number is %d\n", intNumber);
        }

    } while (strcmp(intString, "q") != 0);

    printf("*** End of Converting Strings to int Demo ***\n\n");



    /* Version 2 */
    printf("*** Start of Converting Strings to double Demo ***\n");

    char doubleString[BUFFER_SIZE]; // Declare a character array to store the input string
    double doubleNumber; // Declare a variable to store the converted double value

    do {
        printf("Type the double numeric string (q to quit):\n");

        fgets(doubleString, BUFFER_SIZE, stdin); // Read input string from user

        doubleString[strlen(doubleString) - 1] = '\0'; // Remove newline character from input

        if (strcmp(doubleString, "q") != 0) { // Check if user wants to quit
            doubleNumber = atof(doubleString); // Convert string to double
            printf("Converted number is %f\n", doubleNumber); // Print the converted double value
        }

    } while (strcmp(doubleString, "q") != 0); // Continue the loop until user enters 'q'

    printf("*** End of Converting Strings to double Demo ***\n\n");

    /* Version 3 */
    printf("*** Start of Converting Strings to long Demo ***\n");

    char longString[BUFFER_SIZE];  // Buffer to hold the input string
    long longNumber;  // Variable to hold the converted long number

    do {
        printf("Type the long numeric string (q to quit):\n");

        fgets(longString, BUFFER_SIZE, stdin);  // Get input from user
        longString[strlen(longString) - 1] = '\0';  // Remove newline character

        if (strcmp(longString, "q") != 0) {  // Check if user wants to quit
            longNumber = atol(longString);  // Convert string to long

            printf("Converted number is %ld\n", longNumber);  // Print the converted number
        }

    } while (strcmp(longString, "q") != 0);  // Continue until user types 'q'

    printf("*** End of Converting Strings to long Demo ***\n\n");
}

