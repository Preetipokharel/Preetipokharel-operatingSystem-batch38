#include <stdio.h>

int main() {
    printf("=== Data Type Sizes on This System ===\n\n");

    printf("char:         %zu byte(s)\n", sizeof(char));
    printf("int:          %zu byte(s)\n", sizeof(int));
    printf("float:        %zu byte(s)\n", sizeof(float));
    printf("double:       %zu byte(s)\n", sizeof(double));
    printf("long:         %zu byte(s)\n", sizeof(long));
    printf("unsigned int: %zu byte(s)\n", sizeof(unsigned int));
    printf("long long:    %zu byte(s)\n", sizeof(long long));

    return 0;
}
