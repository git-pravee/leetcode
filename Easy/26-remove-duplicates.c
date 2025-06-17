// Problem: 26. Remove Duplicates from Sorted Array
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

int removeDuplicates(int* nums, int numsSize) {
    if(numsSize==0)
        return 0;
    int index=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[index]!=nums[i])
            nums[++index]=nums[i];
    }
    return index+1;
}