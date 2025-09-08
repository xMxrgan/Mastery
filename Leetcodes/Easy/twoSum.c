/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int *twoSum(int *nums, int target, int size) {

  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {

      if (nums[i] + nums[j] == target) {
        int *results = (int *)malloc(2 * sizeof(int));
        results[0] = i;
        results[1] = j;
        return results;
      }
    }
  }

  return NULL;
}
