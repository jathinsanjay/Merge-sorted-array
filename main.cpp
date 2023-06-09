void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int p1 = m - 1;
    int p2 = n - 1;
    int p = m + n - 1;

    while (p1 >= 0 && p2 >= 0) {
        if (nums1[p1] > nums2[p2]) {
            nums1[p] = nums1[p1];
            p1--;
        } else {
            nums1[p] = nums2[p2];
            p2--;
        }
        p--;
    }

    while (p2 >= 0) {
        nums1[p] = nums2[p2];
        p2--;
        p--;
    }
}
#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n);

int main() {
    int nums1[] = {1, 2, 3, 0, 0, 0};
    int nums1Size = 6;
    int m = 3;
    int nums2[] = {2, 5, 6};
    int nums2Size = 3;
    int n = 3;

    merge(nums1, nums1Size, m, nums2, nums2Size, n);

    printf("[");
    for (int i = 0; i < nums1Size; i++) {
        printf("%d", nums1[i]);
        if (i != nums1Size - 1) {
            printf(", ");
        }
    }
    printf("]\n ");

    return 0;
}
