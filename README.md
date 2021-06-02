# Bellman-Ford Algoritm
 implementacja algorytmu bellmana forda

 ##Krótka instrukcja obsługi

Pobrać plik Bellman_Ford_Algoritm.exe, umieścić w tym samym folderze plik graf.txt,
uruchomić

##format pliku graf.txt:
- cyfra 0, absolutny początek pliku, całkowita liczba wierżchołków w grafie

- pierwsza cyfra: liczba wierzchołków do których można "dostać się" bezpośrednio z bierzącego wierzchołka. 

- druga cyfra: "drógi koniec" krawędzi wychodzącyej z wierzchołka.

- trzecia cyfra: wartość krawędzi; 

- cyfry dwa i trzy powtażamy tyle razy ile zadeklarowaliśmy w w cyfrze pierwszej, następnie cyfrę pierwszą drugą i trzecią powtarzamy tyle razy ile zadeklarowalićmy w cyfrze 0.

jeżeli w pliku umieścimy więcej cyfr niż należy, to może jść do niepoprawnego działania programu. 

Implementacja nie obsługuje wyjątków.

przykłądy poprawnych plików:
```
6
3 1 4 4 8 5 -1
1 2 10
0
1 5 -2
1 3 3
1 4 2
```
```
3
1 1 1
1 2 1
0
```


