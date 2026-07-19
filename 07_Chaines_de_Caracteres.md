# 7️⃣ Chaînes de Caractères

## Qu'est-ce qu'une chaîne ?

Une chaîne est un **tableau de char** terminé par le caractère nul `\0`.

```c
char str[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
// Équivalent à:
char str[] = "hello";  // \0 ajouté automatiquement
```

## Déclaration et initialisation

```c
char str1[10] = "bonjour";       // \0 ajouté automatiquement
char str2[] = "hello";           // taille automatique (6 chars)
char *str3 = "salut";            // pointeur sur une constante
char str4[50];                   // non initialisé
```

## Accès aux caractères

```c
char str[] = "hello";

printf("%c\n", str[0]);  // 'h'
printf("%c\n", str[1]);  // 'e'
printf("%c\n", str[4]);  // 'o'
printf("%c\n", str[5]);  // '\0' (fin)

str[1] = 'a';  // modifier un caractère
printf("%s\n", str);  // "hallo"
```

## Longueur d'une chaîne

### Avec strlen()

```c
#include <string.h>

char str[] = "bonjour";
int longueur = strlen(str);  // 7 (sans le \0)
printf("%d\n", longueur);
```

### Manuelle (compter jusqu'à \0)

```c
int my_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
```

## Fonctions courantes de string.h

### Copie

```c
#include <string.h>

char src[] = "hello";
char dest[50];

strcpy(dest, src);    // ⚠️ dangereux (pas de vérification de taille)
strncpy(dest, src, 5); // safer (max 5 caractères)

printf("%s\n", dest);  // "hello"
```

### Concaténation

```c
char str1[20] = "bonjour";
char str2[] = " monde";

strcat(str1, str2);    // ⚠️ dangereux
strncat(str1, str2, 10); // safer

printf("%s\n", str1);  // "bonjour monde"
```

### Comparaison

```c
char str1[] = "hello";
char str2[] = "hello";
char str3[] = "world";

if (strcmp(str1, str2) == 0)
    printf("Identiques\n");

if (strcmp(str1, str3) != 0)
    printf("Différentes\n");

if (strncmp(str1, "hel", 3) == 0)
    printf("Commence par 'hel'\n");
```

### Chercher un caractère

```c
char str[] = "hello";

char *p = strchr(str, 'l');  // chercher 'l'
if (p != NULL)
    printf("Trouvé à l'index %ld\n", p - str);  // index 2
```

### Chercher une sous-chaîne

```c
char str[] = "bonjour le monde";

char *p = strstr(str, "le");
if (p != NULL)
    printf("Trouvé: %s\n", p);  // "le monde"
```

## Lire des chaînes

### scanf("%s")

```c
char str[50];
scanf("%s", str);  // lire une chaîne (s'arrête au espace)
// ⚠️ Peut déborder si l'entrée est plus longue que 49 chars
```

### fgets()

```c
char str[50];
fgets(str, 50, stdin);  // lire jusqu'à 49 chars (inclut la newline)
// Plus sûr que scanf
```

### Exemple

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    
    printf("Entrez du texte: ");
    fgets(str, 100, stdin);
    
    // Enlever la newline
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    
    printf("Vous avez écrit: %s\n", str);
    printf("Longueur: %ld\n", strlen(str));
    
    return (0);
}
```

## Exemples pratiques

### Inverser une chaîne

```c
void inverser(char *str)
{
    int i = strlen(str) - 1;
    int j = 0;
    
    while (j < i)
    {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
        i--;
    }
}

int main(void)
{
    char str[] = "hello";
    inverser(str);
    printf("%s\n", str);  // "olleh"
    return (0);
}
```

### Convertir en majuscules

```c
#include <ctype.h>

void to_upper(char *str)
{
    for (int i = 0; str[i]; i++)
        str[i] = toupper(str[i]);
}

int main(void)
{
    char str[] = "hello world";
    to_upper(str);
    printf("%s\n", str);  // "HELLO WORLD"
    return (0);
}
```

### Compter les voyelles

```c
int compter_voyelles(char *str)
{
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }
    return (count);
}
```
