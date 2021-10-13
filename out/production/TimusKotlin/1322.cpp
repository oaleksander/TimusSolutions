#include <cstdio>
#include <cstring>

using namespace std;

#define ALPHABET_LENGTH 26

int getAlphabetIndex(char c) {
    if (c >= 'A' && c <= 'Z') return c - 'A';
    if (c == '_') return ALPHABET_LENGTH;
    return c - 'a' + ALPHABET_LENGTH + 1;
}

int main() {
    char word[100001];
    int next_pos[100000];
    int x, length;
    scanf("%d %s", &x, word);
    length = strlen(word);
    --x;
    int cont[ALPHABET_LENGTH * 2];
    memset(cont, 0, sizeof(cont));
    for (int i = 0; i < length; ++i) ++cont[getAlphabetIndex(word[i]) + 1];
    for (int i = 0; i < ALPHABET_LENGTH * 2; ++i) cont[i + 1] += cont[i];
    for (int i = 0; i < length; ++i) next_pos[cont[getAlphabetIndex(word[i])]++] = i;
    for (int i = 0; i < length; ++i) putchar(word[x = next_pos[x]]);
    return 0;
}