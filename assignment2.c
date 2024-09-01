#include <stdio.h>

int main(int argc, char *argv[]) {
    // Check if any arguments were provided
    if (argc < 2) {
        printf("No command line arguments provided.\n");
        return 1; // Exit with an error code
    }

    // Loop through the arguments and print them
    printf("Command line arguments:\n");
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0; // Successful execution
}