#include <stdio.h>
#include <ctype.h>

int count_char(char *str, char ch, int case_insensitive) {
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ch && (!isspace(str[i]) || case_insensitive)) {
      if (!case_insensitive || (tolower(str[i]) == tolower(ch))) {
        count++;
      }
    }
  }
  return count;
}

int main() {
  char str[100], ch;
  int case_insensitive = 0;
  
  printf("Donnez le caratère à compter: ");
  scanf(" %c", &ch);
  printf("Ecrire la phrase à éxaminer: ");
  scanf(" %[^\n]s", str);
  printf("'optionel', comptage insensible à la casse ? (1 oui, 0 non): ");
  scanf("%d", &case_insensitive);
  printf("Le caractère '%c' apparait %d fois dans la phrase.\n", ch, count_char(str, ch, case_insensitive));
  return 0;
}

