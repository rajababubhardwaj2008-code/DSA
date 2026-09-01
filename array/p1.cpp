#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;
    int i, found = 0;

    for (i = 0; i < 5; i++) {
        if (arr[i] == key) {
            found = 1;
            printf("%d found at index %d\n", key, i);
            break;
        }
    }

    if (found == 0) {
        printf("%d not found", key);
    }

    return 0;
}