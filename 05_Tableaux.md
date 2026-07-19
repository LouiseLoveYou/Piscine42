# 5️⃣ Tableaux

## Tableaux 1D

### Déclaration

```c
int tab[5];              // tableau de 5 entiers (non initialisé)
int tab[5] = {1, 2, 3, 4, 5};  // initialisation complète
int tab[] = {1, 2, 3};   // taille déterminée par l'initialisation
int tab[5] = {0};        // initialise tous les éléments à 0
```

### Accès aux éléments

```c
int tab[5] = {10, 20, 30, 40, 50};

printf("%d\n", tab[0]);  // 10 (premier élément)
printf("%d\n", tab[2]);  // 30 (troisième élément)

tab[1] = 25;             // modification d'un élément
```

### ⚠️ Indices

- Les indices commencent à **0**
- Pour un tableau de taille n, les indices vont de **0 à n-1**
- Accéder à `tab[n]` ou plus est une erreur (débordement)

## Tableaux 2D (Matrices)

### Déclaration

```c
int matrice[3][4];      // 3 lignes, 4 colonnes
int mat[2][2] = {
    {1, 2},
    {3, 4}
};
```

### Accès

```c
int matrice[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};

printf("%d\n", matrice[0][0]);  // 1 (ligne 0, colonne 0)
printf("%d\n", matrice[1][2]);  // 7 (ligne 1, colonne 2)

matrice[2][3] = 100;  // modification
```

## Parcours de tableaux

### Boucle simple

```c
int tab[5] = {10, 20, 30, 40, 50};

for (int i = 0; i < 5; i++)
    printf("%d ", tab[i]);
printf("\n");
```

### Tableau 2D

```c
int matrice[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};

for (int i = 0; i < 3; i++)  // parcourir les lignes
{
    for (int j = 0; j < 4; j++)  // parcourir les colonnes
        printf("%d ", matrice[i][j]);
    printf("\n");
}
```

## Tableaux et fonctions

### Passer un tableau à une fonction

```c
void afficher_tableau(int tab[], int taille)
{
    for (int i = 0; i < taille; i++)
        printf("%d ", tab[i]);
    printf("\n");
}

int main(void)
{
    int tab[5] = {1, 2, 3, 4, 5};
    afficher_tableau(tab, 5);
    return (0);
}
```

⚠️ **Attention**: Quand on passe un tableau, c'est en réalité un pointeur (passage par référence)!

### Modifier un tableau dans une fonction

```c
void doubler_elements(int tab[], int taille)
{
    for (int i = 0; i < taille; i++)
        tab[i] *= 2;  // les changements persistent
}

int main(void)
{
    int tab[3] = {1, 2, 3};
    doubler_elements(tab, 3);
    afficher_tableau(tab, 3);  // 2 4 6
    return (0);
}
```

## Exemples pratiques

### Somme des éléments

```c
int somme_tableau(int tab[], int taille)
{
    int somme = 0;
    for (int i = 0; i < taille; i++)
        somme += tab[i];
    return (somme);
}
```

### Trouver le maximum

```c
int trouver_max(int tab[], int taille)
{
    int max = tab[0];
    for (int i = 1; i < taille; i++)
    {
        if (tab[i] > max)
            max = tab[i];
    }
    return (max);
}
```

### Tableau de chaînes (tableau 2D de char)

```c
char noms[3][50] = {
    "Alice",
    "Bob",
    "Charlie"
};

for (int i = 0; i < 3; i++)
    printf("%s\n", noms[i]);
```

### Inverser un tableau

```c
void inverser_tableau(int tab[], int taille)
{
    int i = 0;
    int j = taille - 1;
    
    while (i < j)
    {
        int temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
        i++;
        j--;
    }
}
```
