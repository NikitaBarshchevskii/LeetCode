int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    
    int* result = (int*)malloc(2 * sizeof(int));
    
    for (int j = 0; j < numsSize - 1; j++){
        for (int i = j + 1; i < numsSize; i++){
            if (nums[j] + nums[i] == target){
                result[0] = j;
                result[1] = i;
                *returnSize = 2; 
                return result;
            }
        }       
    }
    
    *returnSize = 0;
    return NULL;
}