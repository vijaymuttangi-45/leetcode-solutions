#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    static char prefix[256];

    if (strsSize == 0) {
        prefix[0] = '\0';
        return prefix;
    }

    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (prefix[j] != '\0' && strs[i][j] != '\0' && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0';

        if (prefix[0] == '\0') {
            break;
        }
    }

    return prefix;
}

int main() {
    // ---- Test Case 1: Typical case ----
    char* test1[] = {"flower", "flow", "flight"};
    printf("Test 1: %s (expected: fl)\n", longestCommonPrefix(test1, 3));

    // ---- Test Case 2: Edge case - no common prefix ----
    char* test2[] = {"dog", "racecar", "car"};
    printf("Test 2: '%s' (expected: '')\n", longestCommonPrefix(test2, 3));

    return 0;
}