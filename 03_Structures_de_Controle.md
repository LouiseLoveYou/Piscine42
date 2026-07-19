# 3️⃣ Structures de Contrôle

## Conditions

### if - else if - else

```c
if (condition)
{
    // code exécuté si condition est true
}
else if (autre_condition)
{
    // code exécuté si autre_condition est true
}
else
{
    // code exécuté sinon
}
```

### Exemple

```c
int age = 18;

if (age >= 18)
    printf("Adulte\n");
else if (age >= 13)
    printf("Adolescent\n");
else
    printf("Enfant\n");
```

### Switch - case

```c
switch (variable)
{
    case valeur1:
        // code
        break;
    case valeur2:
        // code
        break;
    default:
        // code par défaut
}
```

### Exemple

```c
int jour = 3;
char *nom_jour;

switch (jour)
{
    case 1:
        nom_jour = "Lundi";
        break;
    case 2:
        nom_jour = "Mardi";
        break;
    case 3:
        nom_jour = "Mercredi";
        break;
    default:
        nom_jour = "Jour inconnu";
}
printf("%s\n", nom_jour);
```

### Opérateur ternaire

```c
condition ? valeur_si_true : valeur_si_false;

// Exemple
int age = 20;
char *status = (age >= 18) ? "Adulte" : "Mineur";
printf("%s\n", status);  // Adulte
```

## Boucles

### for

```c
for (initialisation; condition; incrémentation)
{
    // code répété
}
```

#### Exemple

```c
// Afficher les nombres de 1 à 10
for (int i = 1; i <= 10; i++)
    printf("%d ", i);
printf("\n");

// Afficher une table de multiplication
for (int i = 1; i <= 10; i++)
    printf("5 x %d = %d\n", i, 5 * i);
```

### while

```c
while (condition)
{
    // code répété
}
```

#### Exemple

```c
int i = 1;
while (i <= 5)
{
    printf("%d\n", i);
    i++;
}
```

### do - while

```c
do
{
    // code répété (exécuté au moins une fois)
} while (condition);
```

#### Exemple

```c
int nombre;
do
{
    printf("Entrez un nombre entre 1 et 10: ");
    scanf("%d", &nombre);
} while (nombre < 1 || nombre > 10);
```

## Contrôle de boucles

```c
break;      // Sort immédiatement de la boucle
continue;   // Passe à l'itération suivante
return;     // Sort de la fonction
```

### Exemple avec break

```c
for (int i = 1; i <= 10; i++)
{
    if (i == 5)
        break;  // arrête à 5
    printf("%d\n", i);
}
```

### Exemple avec continue

```c
for (int i = 1; i <= 10; i++)
{
    if (i % 2 == 0)
        continue;  // saute les nombres pairs
    printf("%d\n", i);  // affiche les impairs
}
```

## Exercices

### 1. Somme des nombres

```c
#include <stdio.h>

int main(void)
{
    int somme = 0;
    for (int i = 1; i <= 100; i++)
        somme += i;
    printf("Somme: %d\n", somme);  // 5050
    return (0);
}
```

### 2. Triangle de nombres

```c
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    return (0);
}
// Affiche:
// *
// **
// ***
// ****
// *****
```
