#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    int freq[26] = {0};  
    printf("Enter a string: ");
    scanf("%s", arr);  
    
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            freq[arr[i] - 'a']++;
        }
    }


    printf(" Frequency:\n");
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c = %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}