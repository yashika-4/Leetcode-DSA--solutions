void deleteAtBeginning(int arr[], int *n) {
    for (int i = 0; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;
}
