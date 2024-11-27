#include <stdio.h>

int main() {
    char s[100], d[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0') {
        d[i] = s[i];
        i++;
    }

    printf("final string: %s\n", d);

    return 0;
}

