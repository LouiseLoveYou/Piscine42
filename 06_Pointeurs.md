# 6️⃣ Pointeurs

## Concept fondamental

### Qu'est-ce qu'un pointeur ?

Un pointeur est une variable qui contient l'**adresse mémoire** d'une autre variable.

### Opérateurs

```c
&variable   // adresse de ("address of")
*pointeur   // déréférence ("dereference") - accès à la valeur
```

## Déclaration et initialisation

### Déclaration

```c
int *p;           // pointeur sur int (p est un pointeur, pas une int)
char *pc;         // pointeur sur char
float *pf;        // pointeur sur float
int **pp;         // pointeur sur pointeur d'int
```

### Initialisation

```c
int x = 42;
int *p = &x;      // p contient l'adresse de x

printf("%d\n", x);      // 42 (valeur de x)
printf("%d\n", *p);     // 42 (valeur pointée par p)
printf("%p\n", p);      // 0x7ffc... (adresse de x)
printf("%p\n", &x);     // 0x7ffc... (adresse de x)
```

## Opérations courantes

### Afficher une adresse

```c
int x = 10;
int *p = &x;

printf("Adresse de x: %p\n", (void *)&x);
printf("Adresse stockée dans p: %p\n", (void *)p);
printf("Valeur de x: %d\n", x);
printf("Valeur pointée par p: %d\n", *p);
```

### Modifier via un pointeur

```c
int x = 10;
int *p = &x;

*p = 20;  // change la valeur de x à 20
printf("%d\n", x);  // 20
```

### Pointeur NULL

```c
int *p = NULL;  // pointeur qui ne pointe nulle part

if (p == NULL)
    printf("Pointeur null!\n");
```

## Pointeurs et tableaux

### Relation entre pointeurs et tableaux

```c
int tab[5] = {10, 20, 30, 40, 50};
int *p = tab;  // p pointe sur le premier élément

printf("%d\n", tab[0]);   // 10
printf("%d\n", *p);       // 10 (même chose)
printf("%d\n", p[0]);     // 10
printf("%d\n", *(p + 1)); // 20 (deuxième élément)
printf("%d\n", p[1]);     // 20 (même chose)
```

### Parcourir avec pointeurs

```c
int tab[5] = {10, 20, 30, 40, 50};
int *p = tab;

// Méthode 1: avec pointeurs
for (int i = 0; i < 5; i++)
    printf("%d ", *(p + i));

// Méthode 2: incrémenter le pointeur
for (int i = 0; i < 5; i++)
{
    printf("%d ", *p);
    p++;
}
```

## Pointeur sur pointeur

### Double indirection

```c
int x = 42;
int *p = &x;      // pointeur sur x
int **pp = &p;    // pointeur sur p

printf("%d\n", x);     // 42
printf("%d\n", *p);    // 42
printf("%d\n", **pp);  // 42

**pp = 100;  // change x à 100
```

## Pointeurs et fonctions

### Passer par référence

```c
void incrementer(int *x)
{
    (*x)++;  // dérérénce, puis incrémente
}

int main(void)
{
    int a = 5;
    incrementer(&a);  // passer l'adresse
    printf("%d\n", a);  // 6
    return (0);
}
```

### Retourner un pointeur

```c
int *creer_nombre(void)
{
    static int x = 42;  // static pour que la variable persiste
    return (&x);
}

int main(void)
{
    int *p = creer_nombre();
    printf("%d\n", *p);  // 42
    return (0);
}
```

⚠️ **Attention**: Ne pas retourner l'adresse d'une variable locale (stack)

## Arithmétique des pointeurs

```c
int tab[5] = {10, 20, 30, 40, 50};
int *p = tab;

p + 1    // pointeur sur le 2e élément
p + 2    // pointeur sur le 3e élément
p[i]     // équivalent à *(p + i)

p++      // passer à l'élément suivant
p--      // revenir à l'élément précédent

int *p2 = tab + 3;
p2 - p   // différence: 3
```

## Exemples pratiques

### Permutation de deux variables

```c
void permutation(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 5, y = 10;
    permutation(&x, &y);
    printf("x = %d, y = %d\n", x, y);  // x = 10, y = 5
    return (0);
}
```

### Chercher dans un tableau

```c
int *chercher(int tab[], int taille, int valeur)
{
    for (int i = 0; i < taille; i++)
    {
        if (tab[i] == valeur)
            return (&tab[i]);  // retourner l'adresse
    }
    return (NULL);  // pas trouvé
}

int main(void)
{
    int tab[5] = {10, 20, 30, 40, 50};
    int *p = chercher(tab, 5, 30);
    
    if (p != NULL)
        printf("Trouvé: %d\n", *p);  // 30
    else
        printf("Pas trouvé\n");
    return (0);
}
```
