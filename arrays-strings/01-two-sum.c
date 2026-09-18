#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* result = malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main() {
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int size1;
    int* res1 = twoSum(nums1, 4, target1, &size1);
    printf("Test 1 Output: [%d, %d]\n", res1[0], res1[1]);
    free(res1);

    int nums2[] = {3, 3};
    int target2 = 6;
    int size2;
    int* res2 = twoSum(nums2, 2, target2, &size2);
    printf("Test 2 Output: [%d, %d]\n", res2[0], res2[1]);
    free(res2);

    return 0;
}
