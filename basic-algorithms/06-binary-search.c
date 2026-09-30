#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    // ---- Test Case 1: Typical case - target found ----
    int test1[] = {-1, 0, 3, 5, 9, 12};
    int result1 = search(test1, 6, 9);
    printf("Test 1: %d (expected: 4)\n", result1);

    // ---- Test Case 2: Edge case - target not found ----
    int test2[] = {-1, 0, 3, 5, 9, 12};
    int result2 = search(test2, 6, 2);
    printf("Test 2: %d (expected: -1)\n", result2);

    // ---- Test Case 3: Edge case - single element array ----
    int test3[] = {5};
    int result3 = search(test3, 1, 5);
    printf("Test 3: %d (expected: 0)\n", result3);

    return 0;
}