#!/usr/bin/env python3

from random import randint

secret = randint(1, 100)

found = False

n = 0

print("J'ai choisi un nombre entre 1 et 100.")

while not found:
    guess = int(input("Votre choix : "));
    n += 1
    if guess < secret:
        print("Plus grand.")
    elif guess > secret:
        print("Plus petit.")
    else:
        found = True;
        print(f"Trouvé ! En {n} coups.");


