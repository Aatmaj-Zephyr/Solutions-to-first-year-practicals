#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[100];
    printf("Enter the string: ");
    scanf("%s", str);
    printf("Enter the substring: ");
    scanf("%s", substr);

    int len_str = strlen(str);
    int len_substr = strlen(substr);
    int index = -1;

    for (int i = 0; i <= len_str - len_substr; ++i) {
        int j;
        for (j = 0; j < len_substr; ++j) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }
        if (j == len_substr) {
            index = i; 
            break;
        }
    }

    if (index != -1) {
        printf("Index: %d\n", index);
    } else {
        printf("Index: -1\n");
    }

    return 0;
}
