#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;
    int freq[5] = {0}; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i]; i++) {
        char ch = tolower(str[i]);
        switch(ch) {
            case 'a': freq[0]++; break;
            case 'e': freq[1]++; break;
            case 'i': freq[2]++; break;
            case 'o': freq[3]++; break;
            case 'u': freq[4]++; break;
        }
    }

    printf("Vowel frequencies:\n");
    printf("a: %d\n", freq[0]);
    printf("e: %d\n", freq[1]);
    printf("i: %d\n", freq[2]);
    printf("o: %d\n", freq[3]);
    printf("u: %d\n", freq[4]);

    return 0;
}
