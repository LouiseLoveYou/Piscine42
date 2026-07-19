# 1️⃣1️⃣ Norminette 42

## Qu'est-ce que c'est ?

La norminette est le **standard de code** obligatoire à 42. Elle assure que le code est lisible, structuré et cohérent.

## Règles principales

### 1. Structure de fichier

```c
/*
** EPITECH PROJECT, 2024
** Nom du projet
** File description:
** Description du fichier
*/

#include <stdio.h>

// ...
```

### 2. Longueur de ligne

- **Maximum 80 colonnes** (incluant les tabulations)
- Si trop long, faire un saut de ligne

```c
// ✅ Bon
printf("Ceci est un texte qui ne dépasse pas 80 colonnes.");

// ❌ Mauvais (trop long)
printf("Ceci est un texte extrêmement long qui dépasse la limite de 80 colonnes et ne respecte pas la norme.");

// ✅ Bon (saut de ligne)
printf("Ceci est un texte qui est découpé "
    "sur plusieurs lignes pour respecter la norme.");
```

### 3. Indentation

- **Utiliser des tabulations** (pas d'espaces)
- **1 tabulation = 1 niveau d'indentation**

```c
int main(void)
{
\tint x = 5;
\tif (x > 0)
\t{
\t\tprintf("Positif\n");
\t}
\treturn (0);
}
```

### 4. Espaces

```c
// ✅ Bon
if (x > 5)
for (int i = 0; i < 10; i++)
while (i < 10)
int tab[10] = {1, 2, 3};
fprintf(fp, "test");

// ❌ Mauvais
if(x>5)
for(int i=0;i<10;i++)
while(i<10)
int tab[10]={1,2,3};
```

### 5. Noms de variables

- **snake_case** pour les variables et fonctions
- **SNAKE_CASE** pour les macros
- Pas de préfixe/suffixe bizarre

```c
// ✅ Bon
int nombre_elements;
char nom_fichier[100];
void ma_fonction(void);
#define MAX_SIZE 100

// ❌ Mauvais
int NumberOfElements;
char _nomFichier[100];
void MyFunction();
#define max_size 100
```

### 6. Fonctions

- Maximum **25 lignes** par fonction
- Toujours `int main(void)` (pas de `int argc, char **argv`)
- Placer les accolades correctement

```c
// ✅ Bon
int ajouter(int a, int b)
{
\treturn (a + b);
}

int main(void)
{
\tint resultat = ajouter(5, 3);
\tprintf("%d\n", resultat);
\treturn (0);
}

// ❌ Mauvais
int ajouter(int a, int b) {
    return a + b;
}

int main(int argc, char **argv) {
    // ...
}
```

### 7. Fichiers .h (Headers)

```c
/*
** EPITECH PROJECT, 2024
** Nom du projet
** File description:
** Description du header
*/

#ifndef MY_HEADER_H
#define MY_HEADER_H

#include <stdio.h>

int ma_fonction(void);

#endif /* !MY_HEADER_H */
```

### 8. Retour à la ligne

- Chaque instruction sur une nouvelle ligne
- Les accolades seules sur leur ligne (sauf exception)

```c
// ✅ Bon
int main(void)
{
\tint x = 5;
\tint y = 10;
\tprintf("%d\n", x + y);
\treturn (0);
}

// ❌ Mauvais
int main(void) { int x = 5; int y = 10; printf("%d\n", x + y); return (0); }
```

### 9. Variables globales

- ❌ **Interdites** (sauf constantes)

```c
// ❌ Mauvais
int global_var = 10;

int main(void)
{
\tglobal_var++;
\treturn (0);
}

// ✅ Bon
int main(void)
{
\tint local_var = 10;
\tlocal_var++;
\treturn (0);
}
```

### 10. Commentaires

```c
// ✅ Bon
/*
** Fonction pour calculer la somme
*/
int somme(int a, int b)
{
\treturn (a + b);
}

// ✅ Bon (commentaire court)
int x = 5;  // Initialiser x

// ❌ Mauvais
int x = 5; //init x
int y = 10;/* add value */
```

## Vérifier avec la norminette

```bash
# Installer
pip install norminette

# Vérifier un fichier
norminette mon_fichier.c

# Vérifier tout le répertoire
norminette .

# Vérifier avec des détails
norminette -v mon_fichier.c
```

## Checklist avant de soumettre

✅ Lignes max 80 caractères  
✅ Indentation avec tabulations  
✅ Pas de variables globales  
✅ Fonctions < 25 lignes  
✅ Noms en snake_case  
✅ Espaces corrects (autour des opérateurs)  
✅ Accolades au bon endroit  
✅ Pas de fuites mémoire  
✅ Tout compile sans warnings  
✅ Norminette passe ✓  

## Exemple complet bien formaté

```c
/*
** EPITECH PROJECT, 2024
** Piscine 42
** File description:
** Main program file
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculer_somme(int *tab, int taille)
{
\tint somme = 0;
\n	for (int i = 0; i < taille; i++)
\t\tsomme += tab[i];
\treturn (somme);
}

int main(void)
{
\tint tab[5] = {1, 2, 3, 4, 5};
\tint somme = calculer_somme(tab, 5);
\n	printf("Somme: %d\n", somme);
\treturn (0);
}
```
