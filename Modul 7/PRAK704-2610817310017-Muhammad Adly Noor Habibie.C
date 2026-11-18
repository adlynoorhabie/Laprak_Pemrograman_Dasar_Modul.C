#include <stdio.h>
#include <string.h>

int main() {
    char description[100];

    fgets(description, 100, stdin);

    size_t len = strlen(description);
    if (len > 0 && description[len - 1] == '\n') {
        description[len - 1] = '\0';
    }

    if (strlen(description) > 20) {
        description[20] = '\0';
        printf("%s...\n", description);
    } else {
        printf("%s\n", description);
    }

    return 0;
}