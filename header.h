#include <stdio.h>
#include <stdlib.h>

#ifndef USER
#define USER

typedef struct Utilisateur Utilisateur;
struct Utilisateur {
  char pseudo[16];
  int age;
  Utilisateur *suivant;
};

#endif // USER

#ifndef PILE
#define PILE

typedef struct Pile Pile;
struct Pile {
  Utilisateur premier;
  int taille;
};

#endif // PILE