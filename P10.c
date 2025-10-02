#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Characters vertically:\n");
    for(i = 0; str[i]; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
