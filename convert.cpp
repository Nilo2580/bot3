#include <stdio.h>

// If example.c has a header, include that instead
#include "example.h"

int main() {
    // Length of the binary data (from the header file)
    unsigned int len = example_bin_len;

    // Open a file to write the binary data
    FILE *f = fopen("E:/Smokiee-main/Smokie", "wb");
    if (f == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Write the binary data to the file
    fwrite(example_bin, 1, len, f);

    // Close the file
    fclose(f);

    printf("Binary file created successfully.\n");

    return 0;
}
