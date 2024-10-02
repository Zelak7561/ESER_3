#include <stdio.h>
#include <string.h>

int main() {
    int rows = 0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\n");

    int a = 1;
    const char symbol[] = "*";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < a; j++) {
            printf("%s", symbol);
        }
        a++;
        printf("\n");
    }


    return 0;
}
