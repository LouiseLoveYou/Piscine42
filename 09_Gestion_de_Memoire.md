# 9️⃣ Gestion de Mémoire

## malloc() - Allouer de la mémoire

### Syntaxe

```c
void *malloc(size_t size);  // retourne un pointeur void
```

### Exemples

```c
#include <stdlib.h>
#include <stdio.h>

int *p = (int *)malloc(sizeof(int));     // allouer 1 int
if (p == NULL)
{
    printf("Erreur: allocation mémoire échouée\n");
    return (1);
}
*p = 42;
printf("%d\n", *p);
free(p);
```

### Allouer un tableau

```c
int *tab = (int *)malloc(10 * sizeof(int));  // tableau de 10 ints

for (int i = 0; i < 10; i++)
    tab[i] = i * 2;

free(tab);
```

### Vérifier l'allocation

```c
int *p = (int *)malloc(sizeof(int));

if (p == NULL)
    printf("Erreur d'allocation\n");
else
    printf("Allocation réussie\n");
```

## free() - Libérer la mémoire

```c
int *p = (int *)malloc(sizeof(int));
*p = 42;
free(p);   // libérer la mémoire
p = NULL;  // bonne pratique
```

⚠️ **Après free(), ne pas utiliser le pointeur!**

```c
int *p = (int *)malloc(sizeof(int));
free(p);
printf("%d\n", *p);  // ❌ ERREUR: "use-after-free"
```

## calloc() - Allouer et initialiser

```c
void *calloc(size_t nitems, size_t size);
// Alloue nitems * size bytes et initialise à 0

int *tab = (int *)calloc(10, sizeof(int));
// Équivalent à malloc(10 * sizeof(int)) + initialiser à 0

for (int i = 0; i < 10; i++)
    printf("%d ", tab[i]);  // tous les éléments sont 0

free(tab);
```

## realloc() - Redimensionner

```c
void *realloc(void *ptr, size_t size);
// Redimensionne un bloc mémoire existant

int *tab = (int *)malloc(5 * sizeof(int));
for (int i = 0; i < 5; i++)
    tab[i] = i;

// Augmenter la taille à 10 éléments
tab = (int *)realloc(tab, 10 * sizeof(int));
if (tab == NULL)
    printf("Erreur realloc\n");

for (int i = 5; i < 10; i++)
    tab[i] = i;

free(tab);
```

## Fuites mémoire

### ❌ Mauvais: Fuite mémoire

```c
void mauvais(void)
{
    int *p = (int *)malloc(sizeof(int));
    *p = 42;
    // oublier free(p) -> fuite mémoire
}  // mémoire allouée mais non libérée
```

### ✅ Bon: Pas de fuite

```c
void bon(void)
{
    int *p = (int *)malloc(sizeof(int));
    *p = 42;
    free(p);
    p = NULL;
}
```

## Allocation de structures

```c
typedef struct {
    char nom[50];
    int age;
} Personne;

Personne *p = (Personne *)malloc(sizeof(Personne));
if (p == NULL)
    return (1);

strcpy(p->nom, "Alice");
p->age = 25;

printf("%s: %d\n", p->nom, p->age);
free(p);
```

## Tableau dynamique 2D

```c
// Allouer une matrice 3x4
int **matrice = (int **)malloc(3 * sizeof(int *));
for (int i = 0; i < 3; i++)
    matrice[i] = (int *)malloc(4 * sizeof(int));

// Utiliser
for (int i = 0; i < 3; i++)
    for (int j = 0; j < 4; j++)
        matrice[i][j] = i * 4 + j;

// Afficher
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
        printf("%d ", matrice[i][j]);
    printf("\n");
}

// Libérer (dans l'ordre inverse)
for (int i = 0; i < 3; i++)
    free(matrice[i]);
free(matrice);
```

## Bonnes pratiques

✅ Toujours vérifier si malloc() retourne NULL  
✅ Utiliser free() pour chaque malloc()  
✅ Initialiser les pointeurs à NULL après free()  
✅ Éviter les fuites mémoire  
✅ Utiliser des outils comme valgrind pour détecter les fuites  

## Valgrind - Détecte les fuites

```bash
# Compiler avec -g pour les symboles de débogage
gcc -g program.c -o program

# Lancer avec valgrind
valgrind ./program

# Rapport détaillé
valgrind --leak-check=full ./program
```
