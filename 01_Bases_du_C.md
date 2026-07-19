# 1️⃣ Bases du C

## Variables et Types

### Types de base

```c
char c = 'A';           // 1 byte (-128 à 127)
unsigned char uc = 255; // 1 byte (0 à 255)
short s = 100;          // 2 bytes (-32768 à 32767)
int i = 42;             // 4 bytes
long l = 123456789L;    // 4 ou 8 bytes
float f = 3.14f;        // 4 bytes
double d = 3.14159;     // 8 bytes
```

### Déclaration et initialisation

```c
int age;                    // déclaration
age = 25;                   // initialisation
int nombre = 10;            // déclaration + initialisation
int x = 1, y = 2, z = 3;    // plusieurs variables
```

## Opérateurs

### Arithmétiques

| Opérateur | Description | Exemple |
|-----------|-------------|----------|
| `+` | Addition | `5 + 3` = 8 |
| `-` | Soustraction | `5 - 3` = 2 |
| `*` | Multiplication | `5 * 3` = 15 |
| `/` | Division | `15 / 3` = 5 |
| `%` | Modulo | `17 % 5` = 2 |

### Comparaison

```c
if (a == b)   // égal
if (a != b)   // différent
if (a > b)    // supérieur
if (a < b)    // inférieur
if (a >= b)   // supérieur ou égal
if (a <= b)   // inférieur ou égal
```

### Logiques

```c
if (a && b)   // ET logique (true si les deux sont true)
if (a || b)   // OU logique (true si au moins un est true)
if (!a)       // NON logique (inverse la valeur)
```

### Incrémentation/Décrémentation

```c
i++;          // incrémente i de 1 (post-incrémentation)
++i;          // incrémente i de 1 (pré-incrémentation)
i--;          // décrémente i de 1
--i;          // décrémente i de 1
i += 5;       // i = i + 5
i -= 3;       // i = i - 3
i *= 2;       // i = i * 2
i /= 4;       // i = i / 4
```

## Conversions de Types

```c
int a = 10;
float b = (float)a;     // conversion explicite (casting)
double c = a;           // conversion implicite
char d = (char)a;       // conversion en char
```

## Entrée/Sortie basique

```c
printf("Bonjour %s!\n", "monde");  // affichage
printf("Nombre: %d\n", 42);
printf("Décimal: %.2f\n", 3.14159);

int nombre;
scanf("%d", &nombre);               // lecture (attention au &)
```

## Format specifiers

| Spécificateur | Type | Exemple |
|---|---|---|
| `%d` | int | `printf("%d", 42);` |
| `%f` | float/double | `printf("%f", 3.14);` |
| `%.2f` | float avec 2 décimales | `printf("%.2f", 3.14159);` |
| `%c` | char | `printf("%c", 'A');` |
| `%s` | string | `printf("%s", "hello");` |
| `%x` | hexadécimal | `printf("%x", 255);` |
| `%i` | int | `printf("%i", 42);` |

## Exemples pratiques

### Calcul simple

```c
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 3;
    
    printf("Somme: %d\n", a + b);
    printf("Différence: %d\n", a - b);
    printf("Produit: %d\n", a * b);
    printf("Quotient: %d\n", a / b);
    printf("Reste: %d\n", a % b);
    
    return (0);
}
```

### Échange de variables

```c
int x = 5, y = 10;
int temp;

temp = x;
x = y;
y = temp;

printf("x = %d, y = %d\n", x, y);  // x = 10, y = 5
```
