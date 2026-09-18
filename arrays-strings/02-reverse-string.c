#include <stdio.h>

void reverseString(char* s, int n) {
    int l = 0;
    int r = n - 1;
    while (l < r) {
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l++;
        r--;
    }
}

int main() {
    char s1[] = {'h','e','l','l','o'};
    int n1 = sizeof(s1) / sizeof(s1[0]);
    reverseString(s1, n1);
    printf("Test 1 Output: ");
    for (int i = 0; i < n1; i++) printf("%c", s1[i]);
    printf("\n");

    char s2[] = {'a'};
    int n2 = sizeof(s2) / sizeof(s2[0]);
    reverseString(s2, n2);
    printf("Test 2 Output: ");
    for (int i = 0; i < n2; i++) printf("%c", s2[i]);
    printf("\n");

    return 0;
}