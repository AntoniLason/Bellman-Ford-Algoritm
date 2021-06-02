# Bellman-Ford Algoritm
 implementacja algorytmu Bellmana-Forda

Autor: Antoni Lasoń

405432

 ##Krótka instrukcja obsługi

Pobrać plik Bellman_Ford_Algoritm.exe, umieścić w tym samym folderze plik graf.txt,
uruchomić. Aplikacja i przykłądowy plik graf.txt znajdują się w katalogu "Folder_Szybkiego_uruchomienia".

Jako punkt źrudłowy, w obec którego obliczane są wagi program przyjmyje pierwszy wierzchołek w pliku graf.txt. nadawany jest mu numer 0. Pozostałe wierzchołki numerowane są w kolejności wystąpień w pliku

W razie problemów z uruchomieniem aplikacji należy spróbować pobrać folder "implementation" a następnie skompilować i uruchomić pliki w nim zawarte. Projekt tworzony był w środowisku CLion z urzyciem zestawu nażędzi deweloperskich MinGW i pliku CMake.




##format pliku graf.txt:
Jest to lista sąsiedztwa rozszerzona o wartość krawędzi łączącej wierzchołki. 
Ilustrowany opis załączony jest jako "Opis_graf.txt"

Należy zaznaćzyć, że 
- cyfra 0, absolutny początek pliku, to całkowita liczba wierżchołków w grafie

- druga cyfra: liczba sąsiadujących wierzchołków.

- trzecia cyfra: "drógi koniec" krawędzi wychodzącyej z wierzchołka.

- czwarta cyfra: wartość krawędzi; 

- cyfry trzy i cztery powtażamy tyle razy ile zadeklarowaliśmy w w cyfrze pierwszej, następnie cyfrę drugą, trzecią i czwartą powtarzamy tyle razy ile zadeklarowalićmy w cyfrze 0.

jeżeli w pliku umieścimy więcej mniej niż należy, to może jść do niepoprawnego działania programu. Umieszczenie nadmiarowych cyfr nie powinno powodować problemów, program po prostu je zignoruje.

Implementacja nie obsługuje wyjątków.

przykłądy poprawnych plików:
(poniższy przykład znajduje się w kodzie plikach repozytorium)
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


