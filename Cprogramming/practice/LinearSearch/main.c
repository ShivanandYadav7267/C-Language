#include <stdio.h>

int main() {
    int a[100], n, i, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

     if (n <= 0 || n > 100) {
         printf("Error: Invalid number of elements. Please enter between 1 and 100.\n");
         return 1;  // return non-zero to indicate error
     }
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }

    printf("Element not found.\n");
    return 0;
}
