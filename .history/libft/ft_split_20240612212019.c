#include <stdlib.h>
#include <string.h>


static int count_substrings(char const *s, char c) {
    int count = 0, in_substring = 0;
    while (*s) {
        if (*s != c && !in_substring) {
            in_substring = 1;
            count++;
        } else if (*s == c) {
            in_substring = 0;
        }
        s++;
    }
    return count;
}

// Helper function to allocate and copy a substring
static char *substring(char const *s, int start, int end) {
    char *sub = (char *)malloc(sizeof(char) * (end - start + 1));
    if (!sub) return NULL;
    strncpy(sub, s + start, end - start);
    sub[end - start] = '\0';
    return sub;
}

char **ft_split(char const *s, char c) {
    if (!s) return NULL;
    int substr_count = count_substrings(s, c);
    char **result = (char **)malloc(sizeof(char *) * (substr_count + 1));
    if (!result) return NULL;

    int i = 0, start = -1;
    for (int j = 0; s[j]; j++) {
        if (s[j] != c && start == -1) start = j;
        else if ((s[j] == c || s[j + 1] == '\0') && start != -1) {
            result[i++] = substring(s, start, s[j] == c ? j : j + 1);
            start = -1;
        }
    }
    result[i] = NULL;
    return result;
}
