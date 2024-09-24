#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void convertToLowerCase(char *str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = tolower(str[i]);
    }
}

void vigenere(const char *text, const char *key, char *ciphertext) {
    unsigned int i, size = strlen(key);

    for (i = 0; text[i] != '\0'; i++) {
        if ((text[i] >= 'a') && (text[i] <= 'z')) {
            int rang = (text[i] + key[i % size] - 2 * 'a') % 26;
            ciphertext[i] = 'A' + rang;
        } else
            ciphertext[i] = text[i];
    }
}

int main() {
    char texte[200];
    char Key[50];
    char cipher[200];
    printf("Rentrez le message à coder : \n");
    fgets(texte, sizeof(texte), stdin);
    convertToLowerCase(texte);

    printf("Rentrez la clé du message : \n");
    fgets(Key, sizeof(Key), stdin);
    convertToLowerCase(Key);

    size_t len_texte = strlen(texte);
    if (len_texte > 0 && texte[len_texte - 1] == '\n') {
        texte[len_texte - 1] = '\0';
    }

    size_t len_key = strlen(Key);
    if (len_key > 0 && Key[len_key - 1] == '\n') {
        Key[len_key - 1] = '\0';
    }

    printf("Le message est : %s et la clé : %s \n", texte, Key);

    vigenere(texte, Key, cipher);

    printf("%s\n", cipher);
    return 0;
}


