#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;

    // Move all non-zero elements to the front, preserving order
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[insertPos] = nums[i];
            insertPos++;
        }
    }

    // Fill the rest with zeroes
    for (int i = insertPos; i < numsSize; i++) {
        nums[i] = 0;
    }
}

void printArray(int* nums, int numsSize) {
    printf("[");
    for (int i = 0; i < numsSize; i++) {
        printf("%d", nums[i]);
        if (i != numsSize - 1) printf(", ");
    }
    printf("]");
}

int main() {
    // ---- Test Case 1: Typical case ----
    int test1[] = {0, 1, 0, 3, 12};
    int size1 = 5;
    moveZeroes(test1, size1);
    printf("Test 1: ");
    printArray(test1, size1);
    printf(" (expected: [1, 3, 12, 0, 0])\n");

    // ---- Test Case 2: Edge case - all zeroes ----
    int test2[] = {0, 0, 0};
    int size2 = 3;
    moveZeroes(test2, size2);
    printf("Test 2: ");
    printArray(test2, size2);
    printf(" (expected: [0, 0, 0])\n");

    // ---- Test Case 3: Edge case - no zeroes ----
    int test3[] = {1, 2, 3};
    int size3 = 3;
    moveZeroes(test3, size3);
    printf("Test 3: ");
    printArray(test3, size3);
    printf(" (expected: [1, 2, 3])\n");

    return 0;
}