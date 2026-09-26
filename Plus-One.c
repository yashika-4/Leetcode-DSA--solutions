int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = digitsSize - 1;

    while (i >= 0 && digits[i] == 9) {
        digits[i] = 0;
        i--;
    }

    if (i >= 0) {
        digits[i]++;
        *returnSize = digitsSize;
        return digits;
    }

    int* result = malloc((digitsSize + 1) * sizeof(int));

    result[0] = 1;

    for (i = 1; i <= digitsSize; i++) {
        result[i] = 0;
    }

    *returnSize = digitsSize + 1;

    return result;
}
