#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int num_chars = 0, num_lines = 0;

    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        num_chars++;
        if (ch == '\n') {
            num_lines++;
        }
    }

    printf("Number of characters: %d\n", num_chars);
    printf("Number of lines: %d\n", num_lines + 1);

    fclose(fp);

    return 0;
}
