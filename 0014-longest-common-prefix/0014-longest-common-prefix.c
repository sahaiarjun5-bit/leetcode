char* longestCommonPrefix(char** strs, int strsSize) {
    static char prefix[200];
    if (strsSize == 0) {
        return "";
    }
    strcpy(prefix, strs[0]);
    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (prefix[j] == strs[i][j] && prefix[j] != '\0') {
            j++;
        }
        prefix[j] = '\0';
    }
    printf("Longest common prefix: %s\n", prefix);
    return prefix;
}