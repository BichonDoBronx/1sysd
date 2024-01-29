#include <stdio.h>

float celsius2fahrenheit(float celsius) {
return (9.0 / 5.0) * celsius + 32;
}

float fahrenheit2celsius (float fahrenheit) {
  return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
  char choice;
  float temperature;

  printf("entrer 1 pour convertir de Celsius à Fahrenheit ou 2 pour convertir de Fahrenheit à Celsius: ");
  scanf(" %c", &choice);

  if (choice == '1') {
    printf("donnez la température en Celsius: ");
    scanf("%f", &temperature);
    printf("La température en Fahrenheit est: %.2f°F\n", celsius2fahrenheit(temperature));
  } else if (choice == '2') {
    printf("donnez la température en Fahrenheit: ");
    scanf("%f", &temperature);
    printf("La température en Celsius est: %.2f°C\n", fahrenheit2celsius(temperature));
  } else {
    printf("ce n'est pas 1 ou 2.\n");
  }

  return 0;
}

