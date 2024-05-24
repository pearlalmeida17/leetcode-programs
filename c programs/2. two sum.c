#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j;
    for(j=0;j<numsSize;j++){
        for(i=0;i<j;i++){
            if(nums[i]==target-nums[j]){
                returnSize=(int*)malloc(numsSize*sizeof(nums));
                returnSize[0]=i;
                returnSize[1]=j;
                return returnSize;
            }
        }
    }
    return returnSize;
}
