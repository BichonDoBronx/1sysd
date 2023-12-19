#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int secret, guess;

    // initialisation de la graine (seed)
    srand(time(NULL));

    secret = rand() % 10 + 1;

    printf("J'ai choisi un nombre entre 1 et 10\n");
    printf("Votre proposition ? ");
    scanf("%d", &guess);
    
    if (guess < secret) {
        printf("Plus grand !\n");
    } else if (guess > secret) {
        printf("Plus petit !\n");
    } else {
        printf("Trouvé !\n");
    }
    printf("C'était %d\n", secret);
    exit(0);
}
    

