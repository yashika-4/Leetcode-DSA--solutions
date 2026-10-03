void insertAtPosition(int arr[], int *n, int pos, int value) {
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    (*n)++;
}
