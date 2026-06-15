# TP Cafetière - UML & C++

Petit TP de prise en main du C++ orienté objet : on modélise une cafetière avec UML puis on l'implémente en C++.

## Diagramme

```
+-----------------------------+
|         Cafetiere           |
+-----------------------------+
| - couleur : string          |
| - marque : string           |
+-----------------------------+
| + Cafetiere()                |
| + ~Cafetiere()                |
| + remplir() : void           |
+-----------------------------+
```

## Fichiers

- `Cafetiere.h` : déclaration de la classe
- `Cafetiere.cpp` : implémentation
- `main.cpp` : test du programme

## Comment lancer

```bash
g++ Cafetiere.cpp main.cpp -o cafetiere
./cafetiere
```

Résultat dans le terminal :
```
Je remplis
```

## Remarques

Couleur et marque sont fixées en dur dans le constructeur ("Noir" et "Moulinex") pour rester simple, pas besoin de les passer en paramètre pour ce TP.
