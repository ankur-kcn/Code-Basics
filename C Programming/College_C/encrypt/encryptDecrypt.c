#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void encrypt(char *input, char *output, int key) {
    for (int i = 0; input[i] != '\0'; i++)
        output[i] = input[i] + key;
    output[strlen(input)] = '\0';
}

void decrypt(char *input, char *output, int key) {
    for (int i = 0; input[i] != '\0'; i++)
        output[i] = input[i] - key;
    output[strlen(input)] = '\0';
}

int main() {
    int choice, key;
    char text[100], result[100];

    while (1) {
        printf("\n=== Menu ===\n");
        printf("1. Encrypt\n");
        printf("2. Decrypt\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear input buffer

        if (choice == 1) {
            printf("Enter text to encrypt: ");
            fgets(text, sizeof(text), stdin);
            text[strcspn(text, "\n")] = '\0';
            srand(time(NULL));
            key = rand() % 25 + 1;
            encrypt(text, result, key);
            printf("Encrypted text: %s\n", result);
            printf("Encryption key: %d\n", key);
        } else if (choice == 2) {
            printf("Enter text to decrypt: ");
            fgets(text, sizeof(text), stdin);
            text[strcspn(text, "\n")] = '\0';
            printf("Enter the key: ");
            scanf("%d", &key);
            getchar();
            decrypt(text, result, key);
            printf("Decrypted text: %s\n", result);
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
