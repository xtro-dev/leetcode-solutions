#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int position = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    // Fill the remaining positions with zeroes
    while (position < numsSize) {
        nums[position] = 0;
        position++;
    }
}

void printArray(int nums[], int size) {
    printf("[");

    for (int i = 0; i < size; i++) {
        printf("%d", nums[i]);

        if (i < size - 1) {
            printf(", ");
        }
    }

    printf("]\n");
}

int main() {

    // Test Case 1
    int nums1[] = {0, 1, 0, 3, 12};

    printf("Test Case 1: ");
    moveZeroes(nums1, 5);
    printArray(nums1, 5);


    // Test Case 2 - Edge Case
    int nums2[] = {0};

    printf("Test Case 2: ");
    moveZeroes(nums2, 1);
    printArray(nums2, 1);

    return 0;
}