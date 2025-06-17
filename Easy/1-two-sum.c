// Problem: 1. Two Sum
// Link: https://leetcode.com/problems/two-sum/description/
#include<stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));  // Allocate memory for the result array
    if(result==NULL) {
        *returnSize=0;
        return NULL; // Return NULL if memory allocation fails
    }
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                result[0]=i;
                result[1]=j;
                *returnSize=2;  // Set the return size to 2
                return result;  // Return the result array
            }
        }
    }
    *returnSize=0;// If no solution found, set return size to 0
    free(result); // Free the allocated memory before returning NULL
    return NULL; // Return NULL if no solution is found
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize = 0;

    int *result = twoSum(nums, 4, target, &returnSize);
    if(result!=NULL)
    {
        printf("Output: [%d, %d]\n", result[0], result[1]);
        free(result);
    }
    else
    {
        printf("No solution found.\n");
    }

    return 0;
}