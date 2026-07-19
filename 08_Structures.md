# 8️⃣ Structures

## Qu'est-ce qu'une structure ?

Une structure est un type de données composé qui regroupe plusieurs variables de types différents.

## Déclaration

### Syntaxe

```c
struct nom_structure {
    type1 membre1;
    type2 membre2;
    type3 membre3;
};
```

### Exemple

```c
struct Personne {
    char nom[50];
    int age;
    float taille;
};
```

## Utilisation

### Créer une variable de structure

```c
struct Personne p1;
```

### Initialiser

```c
struct Personne p1 = {"Alice", 25, 1.65};

struct Personne p2;
p2.age = 30;
strcpy(p2.nom, "Bob");
p2.taille = 1.80;
```

### Accéder aux membres

```c
struct Personne p = {"Charlie", 28, 1.75};

printf("%s\n", p.nom);    // "Charlie"
printf("%d\n", p.age);    // 28
printf("%.2f\n", p.taille); // 1.75
```

## Structures et pointeurs

### Pointeur sur structure

```c
struct Personne p = {"Alice", 25, 1.65};
struct Personne *pp = &p;

// Deux façons d'accéder aux membres:
printf("%s\n", (*pp).nom);     // déréférence puis point
printf("%s\n", pp->nom);       // flèche (équivalent)
```

### Modifier via pointeur

```c
pp->age = 26;
(*pp).taille = 1.66;
```

## typedef

### Simplifier le type

```c
typedef struct {
    char nom[50];
    int age;
    float taille;
} Personne;  // Personne est maintenant un type

// Plus besoin d'écrire "struct Personne"
Personne p1;
Personne p2;
```

### Avec le nom de structure

```c
typedef struct Personne {
    char nom[50];
    int age;
    float taille;
} Personne;

Personne p1 = {"Alice", 25, 1.65};
```

## Tableau de structures

```c
typedef struct {
    char nom[50];
    int age;
} Personne;

int main(void)
{
    Personne equipe[3] = {
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 28}
    };
    
    for (int i = 0; i < 3; i++)
        printf("%s: %d ans\n", equipe[i].nom, equipe[i].age);
    
    return (0);
}
```

## Structures imbriquées

```c
typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    char nom[50];
    int age;
    Date date_naissance;
} Personne;

int main(void)
{
    Personne p = {"Alice", 25, {15, 3, 1999}};
    
    printf("%s\n", p.nom);  // Alice
    printf("%d/%d/%d\n", p.date_naissance.jour,
                        p.date_naissance.mois,
                        p.date_naissance.annee);
    
    return (0);
}
```

## Fonctions avec structures

### Passer une structure

```c
void afficher_personne(Personne p)
{
    printf("Nom: %s\n", p.nom);
    printf("Âge: %d\n", p.age);
}

int main(void)
{
    Personne p = {"Alice", 25};
    afficher_personne(p);
    return (0);
}
```

### Passer par référence (pointeur)

```c
void incrementer_age(Personne *p)
{
    p->age++;  // modification persistante
}

int main(void)
{
    Personne p = {"Alice", 25};
    incrementer_age(&p);
    printf("%d\n", p.age);  // 26
    return (0);
}
```

### Retourner une structure

```c
Personne creer_personne(char *nom, int age)
{
    Personne p;
    strcpy(p.nom, nom);
    p.age = age;
    return (p);
}

int main(void)
{
    Personne p = creer_personne("Bob", 30);
    printf("%s: %d\n", p.nom, p.age);
    return (0);
}
```

## Exemple complet: Gestion d'une école

```c
#include <stdio.h>
#include <string.h>

typedef struct {
    int jour, mois, annee;
} Date;

typedef struct {
    int id;
    char nom[50];
    float note;
    Date date_inscription;
} Etudiant;

void afficher_etudiant(Etudiant e)
{
    printf("ID: %d\n", e.id);
    printf("Nom: %s\n", e.nom);
    printf("Note: %.2f\n", e.note);
    printf("Inscription: %d/%d/%d\n", e.date_inscription.jour,
                                     e.date_inscription.mois,
                                     e.date_inscription.annee);
}

int main(void)
{
    Etudiant classe[2] = {
        {1, "Alice", 18.5, {1, 9, 2023}},
        {2, "Bob", 16.0, {15, 9, 2023}}
    };
    
    for (int i = 0; i < 2; i++)
    {
        afficher_etudiant(classe[i]);
        printf("---\n");
    }
    
    return (0);
}
```
