char* longestCommonPrefix(char** strs, int strsSize) {
    int i = 0;
    int j;

    while (strs[0][i] != '\0') {
        for (j = 1; j < strsSize; j++) {
            if (strs[j][i] != strs[0][i]) {
                break;
            }
        }

        if (j < strsSize) {
            break;
        }

        i++;
    }

    char* result = malloc((i + 1) * sizeof(char));

    for (j = 0; j < i; j++) {
        result[j] = strs[0][j];
    }

    result[i] = '\0';

    return result;
}
