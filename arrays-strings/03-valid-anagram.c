#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t)) return false;

    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }
    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) return false;
    }
    return true;
}

int main() {
    char s1[] = "anagram";
    char t1[] = "nagaram";
    printf("Test 1 Output: %s\n", isAnagram(s1, t1) ? "true" : "false");

    char s2[] = "rat";
    char t2[] = "car";
    printf("Test 2 Output: %s\n", isAnagram(s2, t2) ? "true" : "false");

    return 0;
}