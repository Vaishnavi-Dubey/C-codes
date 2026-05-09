/**
 * File I/O Mastery in C.
 * Demonstrates: Writing to, Reading from, and Appending to a file.
 * Handles basic error checking for file pointers.
 * Compile: gcc -Wall -o file_io 05-Systems/file_io_master.c
 */

#include <stdio.h>
#include <stdlib.h>

void writeFile(const char* filename) {
    FILE* fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error opening file for writing");
        return;
    }
    fprintf(fp, "Hello, C Systems Programming!\n");
    fprintf(fp, "This file was created by the file_io_master demo.\n");
    fclose(fp);
    printf("Successfully wrote to %s\n", filename);
}

void readFile(const char* filename) {
    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file for reading");
        return;
    }
    char buffer[255];
    printf("--- Content of %s ---\n", filename);
    while (fgets(buffer, 255, fp)) {
        printf("%s", buffer);
    }
    fclose(fp);
}

int main() {
    const char* filename = "demo.txt";

    writeFile(filename);
    readFile(filename);

    return 0;
}
