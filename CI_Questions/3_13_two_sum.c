/*
    Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
    You may assume that each input would have exactly one solution, and you may not use the same element twice.
    You can return the answer in any order.

    examples:
    nums = [2,7,11,15], target = 9
    return the index of 9 = nums[0] + nums[1]

    algorithm:
    1: loop through the array, result = target - nums[i]
    2: loop through the array again from the i+1, checkout anything equals to result. 
    3: return i and j in array
*/
#include <stdio.h>
#include <stdlib.h>

int *two_sum(int *nums, int nums_size, int target, int *returnSize)
{
    *returnSize = 2;
    int *ans = (int *)malloc(sizeof(int) * 2);
    for (int i = 0; i < nums_size; i++)
    {
        int temp = target - nums[i];
        for (int j = i + 1; j < nums_size; j++)
        {
            if (*(nums + j) == temp)
            {
                *ans = i;
                *(ans + 1) = j;
                break;
            }
        }
    }
    printf("print off answers: %d\n", *ans);
    return ans;
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    size_t size = sizeof(nums);
    int results[2];
    printf("My solution\n");
    for (int i = 0; i < size; i++)
    {
        int result = target - nums[i];
        for (int j = i + 1; j < size; j++)
        {
            if (result == nums[j])
            {
                results[0] = i;
                results[i] = j;
                printf("Print out i: %d and j: %d\n", i, j);
                break;
                
            }
        }
    }
    int *pointer = nums;
    int return_array[2];
    int *return_size = return_array;

    int *r = two_sum(pointer, size, target, return_size);
    return 0;
}

