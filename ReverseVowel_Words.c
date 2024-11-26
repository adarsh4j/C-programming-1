Write a C program to reverse only the vowels in a given sentence. For example:

If the input sentence is "hello world", the output should be "hollo werld".
If the input sentence is "programming is fun", the output should be "prugremmong os fan".



#include <stdio.h>
#include <string.h>

// Function to check if a character is a vowel
int isVowel(char c) {
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; vowels[i] != '\0'; i++) {
        if (c == vowels[i]) {
            return 1;
        }
    }
    return 0;
}

// Function to reverse vowels in a sentence
void reverseVowels(char str[]) {
    int left = 0, right = strlen(str) - 1;

    while (left < right) {
        // Move left pointer to the next vowel
        if (!isVowel(str[left])) {
            left++;
            continue;
        }

        // Move right pointer to the previous vowel
        if (!isVowel(str[right])) {
            right--;
            continue;
        }

        // Swap vowels
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Reverse vowels in the sentence
    reverseVowels(sentence);

    // Output the result
    printf("Sentence after reversing vowels: %s", sentence);

    return 0;
}
