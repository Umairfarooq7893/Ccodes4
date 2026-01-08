#include <stdio.h>
#include <string.h>
#include <ctype.h>  // For character functions

int main() {
    char str1[50];
    char str2[50];
    char str3[50];
    char str4[50];
    
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // 1. Length
    printf("Length of str1: %d\n", strlen(str1));

    // 2. Compare strings
    int cmp = strcmp(str1, str2);
    printf("strcmp result: %d\n", cmp);

    // 3. Convert to uppercase/lowercase
    strupr(str1);
    printf("Uppercase str1: %s\n", str1);
    strlwr(str1);
    printf("Lowercase str1: %s\n", str1);

    // 4. Copy
    strcpy(str3, str1);
    printf("str3 (copied from str1): %s\n", str3);

    // 5. Reverse
    strrev(str3);
    printf("Reversed str3: %s\n", str3);

    // 6. Concatenate
    strcat(str1, str2);
    printf("Concatenated str1 + str2: %s\n", str1);

    // 7. Find a character in string
    char ch;
    printf("Enter a character to search in str2: ");
    scanf(" %c", &ch); // space before %c to consume leftover newline
    char *ptr = strchr(str2, ch);
    if(ptr != NULL)
        printf("Character '%c' found at position: %ld\n", ch, ptr - str2 + 1);
    else
        printf("Character '%c' not found\n", ch);

    // 8. Find a substring
    printf("Enter a substring to search in str2: ");
    scanf("%s", str4);
    char *sub = strstr(str2, str4);
    if(sub != NULL)
        printf("Substring '%s' found at position: %ld\n", str4, sub - str2 + 1);
    else
        printf("Substring '%s' not found\n", str4);

    // 9. Count vowels in str2
    int vowels = 0;
    for(int i = 0; str2[i] != '\0'; i++){
        char c = tolower(str2[i]);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            vowels++;
    }
    printf("Number of vowels in str2: %d\n", vowels);

    // 10. Check if strings are identical ignoring case
    if(strcasecmp(str1, str2) == 0)
        printf("str1 and str2 are equal (case-insensitive)\n");
    else
        printf("str1 and str2 are NOT equal (case-insensitive)\n");

    return 0;
}
