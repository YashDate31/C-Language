#include <stdio.h>

int main() {
    FILE *source, *dest;
    char ch;

    source = fopen("output.txt", "r");

    if (source == NULL) {
        printf("Error: source file not found\n");
        return 1;
    }

    dest = fopen("copy.txt", "w");

    if (dest == NULL) {
        printf("Error: could not create destination file\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    fclose(source);
    fclose(dest);

    printf("File copied successfully to copy.txt\n");

    return 0;
}
