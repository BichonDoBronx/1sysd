#include <stdio.h>
#include <stdlib.h>

int Nb_De_Caractere(char *str, char ch) {
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ch && !isspace(str[i])) {
      count++;
    }
  }
  return count;
}

int main() {
  char str[100], ch;
  printf("Donnez le caractère à compter: ");
  scanf(" %c", &ch);
  printf("Ecrire la phrase à éxaminer: ");
  scanf(" %[^\n]s", str);
  printf("Le caractère '%c' apparait %d fois dans la phrase.\n", ch, Nb_De_Caractere(str, ch));
  return 0;
}

