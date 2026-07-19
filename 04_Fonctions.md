# 4️⃣ Fonctions

## Déclaration et Définition

### Syntaxe

```c
type_retour nom_fonction(type1 param1, type2 param2, ...)
{
    // corps de la fonction
    return (valeur);
}
```

### Exemple simple

```c
int ajouter(int a, int b)
{
    return (a + b);
}

int main(void)
{
    int resultat = ajouter(5, 3);
    printf("%d\n", resultat);  // 8
    return (0);
}
```

## Prototype (Déclaration)

```c
// Prototype (avant main)
int ajouter(int a, int b);

int main(void)
{
    int resultat = ajouter(5, 3);
    return (0);
}

// Définition (après main)
int ajouter(int a, int b)
{
    return (a + b);
}
```

## Types de retour

```c
void afficher(void)          // pas de paramètre, pas de retour
{
    printf("Hello\n");
}

int calculer(void)           // pas de paramètre, retourne int
{
    return (42);
}

void traiter(int x)          // avec paramètre, pas de retour
{
    printf("%d\n", x);
}

float diviser(float a, float b)  // avec paramètres, retourne float
{
    return (a / b);
}
```

## Passage de paramètres

### Par valeur

```c
void incrementer(int x)
{
    x++;  // modifie la copie locale, pas l'original
}

int main(void)
{
    int a = 5;
    incrementer(a);
    printf("%d\n", a);  // 5 (inchangé)
    return (0);
}
```

### Par référence (avec pointeurs)

```c
void incrementer(int *x)
{
    (*x)++;  // modifie l'original
}

int main(void)
{
    int a = 5;
    incrementer(&a);
    printf("%d\n", a);  // 6 (modifié)
    return (0);
}
```

## Exemples pratiques

### Fonction pour calculer la factorielle

```c
int factorielle(int n)
{
    if (n == 0 || n == 1)
        return (1);
    return (n * factorielle(n - 1));
}

int main(void)
{
    printf("5! = %d\n", factorielle(5));  // 120
    return (0);
}
```

### Fonction pour vérifier un nombre premier

```c
int est_premier(int n)
{
    if (n <= 1)
        return (0);
    if (n <= 3)
        return (1);
    if (n % 2 == 0 || n % 3 == 0)
        return (0);
    
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return (0);
    }
    return (1);
}

int main(void)
{
    printf("%d\n", est_premier(17));  // 1 (true)
    printf("%d\n", est_premier(10));  // 0 (false)
    return (0);
}
```

### Fonction pour inverser une chaîne

```c
void inverser(char *str)
{
    int i = 0;
    int j = strlen(str) - 1;
    
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main(void)
{
    char str[] = "hello";
    inverser(str);
    printf("%s\n", str);  // olleh
    return (0);
}
```

## Bonnes pratiques

✅ Une fonction = une responsabilité  
✅ Noms descriptifs  
✅ Commenter les fonctions complexes  
✅ Utiliser des prototypes  
✅ Éviter les variables globales  
