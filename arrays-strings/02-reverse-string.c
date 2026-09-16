#include <stdio.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {

    char s1[] = {'h', 'e', 'l', 'l', 'o'};

    reverseString(s1, 5);

    printf("Test Case 1: ");

    for (int i = 0; i < 5; i++) {
        printf("%c ", s1[i]);
    }

    printf("\n");


    char s2[] = {'a'};

    reverseString(s2, 1);

    printf("Test Case 2: ");

    for (int i = 0; i < 1; i++) {
        printf("%c ", s2[i]);
    }

    printf("\n");

    return 0;
}