#include <stdio.h>

int main() {
    char name[10];
    gets(name);

    printf("from stdin: %s", name);

    return 0;
}