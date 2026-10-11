int missingNumber(int* nums, int numsSize) {
int n = numsSize;
int sum = n * (n + 1) / 2;

for (int i = 0; i < numsSize; i++) {
    sum -= nums[i];
}

return sum;

}
