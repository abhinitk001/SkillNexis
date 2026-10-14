#include <stdio.h>
#include <ctype.h>
int countWords(const char *str) {
    int count = 0;
    int inWord = 0; 
    while (*str != '\0') {
        if (isspace((unsigned char)*str)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
        str++; 
    }
    return count;
}
int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    int words = countWords(sentence);
    printf("Total words: %d\n", words);
    return 0;
}
