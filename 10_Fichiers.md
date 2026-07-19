# 1️⃣0️⃣ Fichiers

## Ouverture et fermeture

### fopen()

```c
#include <stdio.h>

FILE *fp = fopen("nom_fichier.txt", "mode");
```

### Modes

| Mode | Description |
|------|-------------|
| `"r"` | Lecture (fichier doit exister) |
| `"w"` | Écriture (crée ou écrase) |
| `"a"` | Ajout (écrit à la fin) |
| `"r+"` | Lecture + écriture |
| `"w+"` | Lecture + écriture (crée ou écrase) |
| `"a+"` | Lecture + ajout |

### Vérifier l'ouverture

```c
FILE *fp = fopen("data.txt", "r");

if (fp == NULL)
{
    printf("Erreur: impossible d'ouvrir le fichier\n");
    return (1);
}
```

### fclose()

```c
fclose(fp);  // toujours fermer après utilisation
fp = NULL;   // bonne pratique
```

## Lire d'un fichier

### Lire caractère par caractère

```c
FILE *fp = fopen("data.txt", "r");

int c;
while ((c = fgetc(fp)) != EOF)
{
    printf("%c", c);
}

fclose(fp);
```

### Lire une chaîne

```c
FILE *fp = fopen("data.txt", "r");
char str[100];

while (fgets(str, 100, fp) != NULL)
{
    printf("%s", str);
}

fclose(fp);
```

### Lire formaté

```c
FILE *fp = fopen("data.txt", "r");
int num;
char nom[50];

fscanf(fp, "%d %s", &num, nom);

fclose(fp);
```

## Écrire dans un fichier

### fputc() - Caractère

```c
FILE *fp = fopen("output.txt", "w");

fputc('A', fp);
fputc('\n', fp);

fclose(fp);
```

### fputs() - Chaîne

```c
FILE *fp = fopen("output.txt", "w");

fputs("Bonjour\n", fp);
fputs("Le monde\n", fp);

fclose(fp);
```

### fprintf() - Formaté

```c
FILE *fp = fopen("data.txt", "w");

int age = 25;
char nom[] = "Alice";

fprintf(fp, "Nom: %s\n", nom);
fprintf(fp, "Âge: %d\n", age);

fclose(fp);
```

## Exemple: Copier un fichier

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *src = fopen("source.txt", "r");
    FILE *dst = fopen("destination.txt", "w");
    
    if (src == NULL || dst == NULL)
    {
        printf("Erreur d'ouverture\n");
        return (1);
    }
    
    int c;
    while ((c = fgetc(src)) != EOF)
        fputc(c, dst);
    
    fclose(src);
    fclose(dst);
    
    printf("Fichier copié\n");
    return (0);
}
```

## Exemple: Compter les lignes

```c
#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL)
        return (1);
    
    int lignes = 0;
    int c;
    
    while ((c = fgetc(fp)) != EOF)
    {
        if (c == '\n')
            lignes++;
    }
    
    fclose(fp);
    printf("Nombre de lignes: %d\n", lignes);
    return (0);
}
```

## Positionnement dans le fichier

### fseek()

```c
FILE *fp = fopen("data.bin", "rb");

fseek(fp, 0, SEEK_SET);      // début du fichier
fseek(fp, 10, SEEK_SET);     // 10 bytes du début
fseek(fp, -5, SEEK_END);     // 5 bytes avant la fin
fseek(fp, 5, SEEK_CUR);      // 5 bytes après la position actuelle

fclose(fp);
```

### ftell()

```c
FILE *fp = fopen("data.txt", "r");

long pos = ftell(fp);  // position actuelle
printf("Position: %ld\n", pos);

fclose(fp);
```

## Exemple complet: Lecteur de fichier

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char nom_fichier[100];
    char ligne[256];
    int numero_ligne = 1;
    
    printf("Nom du fichier: ");
    scanf("%s", nom_fichier);
    
    fp = fopen(nom_fichier, "r");
    if (fp == NULL)
    {
        printf("Erreur: impossible d'ouvrir %s\n", nom_fichier);
        return (1);
    }
    
    while (fgets(ligne, 256, fp) != NULL)
    {
        printf("%d: %s", numero_ligne, ligne);
        numero_ligne++;
    }
    
    fclose(fp);
    printf("\nFichier fermé\n");
    return (0);
}
```
