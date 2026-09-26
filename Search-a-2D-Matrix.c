bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int left = 0;
    int right = matrixSize * matrixColSize[0] - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int row = mid / matrixColSize[0];
        int col = mid % matrixColSize[0];

        if (matrix[row][col] == target) {
            return true;
        }
        else if (matrix[row][col] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return false;
}
