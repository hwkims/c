#include <stdio.h>

int main() {
    double b; // Use double instead of float

    printf("Enter a value: ");
    scanf(" %lf", &b); // Add space before %lf

    int c = b;
    printf("%d\n", c);
    printf("%lf\n", b - c);
    printf("%.2f\n", b - c);

    printf("Press Enter to exit...");
    scanf("%*c"); // Use scanf() to keep console window open

    return 0;
}