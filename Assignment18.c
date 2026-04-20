#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int choice, i, len = 0, flag;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str1);

    printf("\nMENU:\n");
    printf("1. Length of string\n");
    printf("2. Reverse string\n");
    printf("3. Compare two strings\n");
    printf("4. Check palindrome\n");
    printf("5. Check substring\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        // 🔹 Length
        case 1:
            i = 0;
            while(str1[i] != '\0') {
                len++;
                i++;
            }
            printf("Length = %d\n", len);
            break;

        // 🔹 Reverse
        case 2:
            i = 0;
            while(str1[i] != '\0') {
                len++;
                i++;
            }

            printf("Reversed string: ");
            for(i = len - 1; i >= 0; i--) {
                printf("%c", str1[i]);
            }
            printf("\n");
            break;

        // 🔹 Compare
        case 3:
            printf("Enter second string: ");
            scanf("%s", str2);

            i = 0;
            flag = 1;

            while(str1[i] != '\0' || str2[i] != '\0') {
                if(str1[i] != str2[i]) {
                    flag = 0;
                    break;
                }
                i++;
            }

            if(flag)
                printf("Strings are Equal\n");
            else
                printf("Strings are Not Equal\n");
            break;

        // 🔹 Palindrome
        case 4:
            len = 0;
            while(str1[len] != '\0') {
                len++;
            }

            flag = 1;
            for(i = 0; i < len / 2; i++) {
                if(str1[i] != str1[len - i - 1]) {
                    flag = 0;
                    break;
                }
            }

            if(flag)
                printf("Palindrome\n");
            else
                printf("Not Palindrome\n");
            break;

        // 🔹 Substring
        case 5:
            printf("Enter substring: ");
            scanf("%s", str2);

            i = 0;
            flag = 0;

            while(str1[i] != '\0') {
                int j = 0;

                while(str2[j] != '\0' && str1[i + j] == str2[j]) {
                    j++;
                }

                if(str2[j] == '\0') {
                    flag = 1;
                    break;
                }

                i++;
            }

            if(flag)
                printf("Substring Found\n");
            else
                printf("Substring Not Found\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
