#include <stdio.h>

int main(void) {
    int mass[11] = {1,2,2,3,4,5,6,7,8,9,10};
    size_t size = sizeof(mass)/sizeof(*mass);

    for (int i = 0; i < size; i++) {
        printf("%d\n", mass[i]);
    }

    printf("%d\n", size);

    int k, m;
    printf("Input diapozon indexes k-m: ");
    scanf("%d %d", k, m);

    printf("Here: %d", k);

    for (int x = 0; x < size; x++) {
        break;
    }

    return 0;
}

