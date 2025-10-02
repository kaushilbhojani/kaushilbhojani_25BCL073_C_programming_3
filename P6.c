#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int res;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    res = strcmp(str1, str2);

    if(res > 0)
        printf("First string is greater.\n");
    else if(res < 0)
        printf("Second string is greater.\n");
    else
        printf("Both strings are same.\n");

    return 0;
}
