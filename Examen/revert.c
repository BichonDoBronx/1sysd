#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = argc - 1; i > 0; i--) {
        printf("%s\n", argv[i]);
        }
        exit(0);
}
