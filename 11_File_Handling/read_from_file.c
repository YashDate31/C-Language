#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("output.txt", "r");

    if (fp == NULL) {
        printf("Error: file not found\n");
        printf("Run write_to_file.c first to create the file\n");
        return 1;
    }

    printf("Contents of output.txt:\n");
    printf("------------------------\n");

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
