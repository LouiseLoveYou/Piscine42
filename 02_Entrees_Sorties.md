# 2️⃣ Entrées/Sorties

## printf() - Affichage

### Syntaxe

```c
printf("format string", arguments);
```

### Format specifiers

```c
printf("%d", 42);           // entier: 42
printf("%i", 42);           // entier: 42
printf("%f", 3.14);         // float: 3.140000
printf("%.2f", 3.14);       // float 2 décimales: 3.14
printf("%e", 1000.0);       // notation scientifique: 1.000000e+03
printf("%c", 'A');          // caractère: A
printf("%s", "hello");      // chaîne: hello
printf("%x", 255);          // hexadécimal: ff
printf("%X", 255);          // hexadécimal majuscule: FF
printf("%o", 8);            // octal: 10
printf("%p", &variable);    // pointeur: 0x7ffc....
```

### Modifieurs

```c
printf("%5d", 42);          // largeur 5: "   42"
printf("%-5d", 42);         // aligné à gauche: "42   "
printf("%05d", 42);         // remplir avec zéros: "00042"
printf("%+d", 42);          // afficher le signe: "+42"
printf("% d", 42);          // espace pour les positifs: " 42"
printf("%10.2f", 3.14);     // largeur 10, 2 décimales
```

### Caractères d'échappement

```c
\n   // nouvelle ligne
\t   // tabulation
\\   // antislash
\"   // guillemet
\'   // apostrophe
\0   // caractère nul (fin de string)
\a   // sonnerie (bell)
\b   // retour arrière (backspace)
\r   // retour à la ligne (carriage return)
```

## scanf() - Lecture

### Syntaxe

```c
scanf("format string", &variable1, &variable2, ...);
```

### Exemples

```c
int nombre;
scanf("%d", &nombre);           // lire un entier

float prix;
scanf("%f", &prix);             // lire un float

char caractere;
scanf("%c", &caractere);        // lire un caractère

char nom[50];
scanf("%s", nom);               // lire une chaîne (ATTENTION: pas de &)

int jour, mois, annee;
scanf("%d/%d/%d", &jour, &mois, &annee);  // lire avec séparateurs
```

### ⚠️ Points importants

- **Utiliser `&` avant les variables** (sauf pour les chaînes)
- **scanf() retourne le nombre d'arguments lus** (pour vérifier les erreurs)
- **scanf("%s") peut déborder** - préférer `fgets()`

## fgets() et puts() - Chaînes

```c
char str[100];
fgets(str, 100, stdin);     // lire une chaîne avec newline
puts(str);                   // afficher une chaîne avec newline
```

## Exemple complet

```c
#include <stdio.h>

int main(void)
{
    int age;
    float taille;
    char nom[50];
    
    printf("Entrez votre nom: ");
    scanf("%s", nom);
    
    printf("Entrez votre âge: ");
    scanf("%d", &age);
    
    printf("Entrez votre taille: ");
    scanf("%f", &taille);
    
    printf("\n=== Informations ===\n");
    printf("Nom: %s\n", nom);
    printf("Âge: %d ans\n", age);
    printf("Taille: %.2f m\n", taille);
    
    return (0);
}
```
