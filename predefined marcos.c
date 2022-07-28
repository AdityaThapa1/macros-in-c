#include <stdio.h>

void main()
{

    // Example of predefined macros
    printf("This is line no.: %d\n", __LINE__);     // 7
    printf("Name of this file: %s\n", __FILE__);   // macros.c
    printf("Current Date: %s\n", __DATE__);        // shows current time (HH:MM:SS)
    printf("Current Time: %s\n", __TIME__);        // shows current date (MMM DD YYYY)
    printf("Compilation success: %d\n", __STDC__); // 1
}
