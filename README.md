# Bellman-Ford Algoritm
 implementacja algorytmu Bellmana-Forda

Autor: Antoni Lasoń

405432

 ## Krótka instrukcja obsługi

Aby uruchomić program, należy pobrać plik Bellman_Ford_Algoritm.exe, umieścić w tym samym folderze plik graf.txt,
a następnie uruchomić plik wykonywalny. Aplikacja i przykładowy plik graf.txt znajdują się w katalogu "Folder_Szybkiego_uruchomienia".

Jako punkt źrudłowy, w obec którego obliczane są wagi program przyjmyje pierwszy wierzchołek w pliku graf.txt. Nadawany jest mu numer 0. Pozostałe wierzchołki numerowane są w kolejności wystąpień w pliku

W razie problemów z uruchomieniem aplikacji należy pobrać folder "implementation" a następnie skompilować i uruchomić pliki w nim zawarte. Projekt tworzony był w środowisku CLion z urzyciem zestawu nażędzi deweloperskich MinGW i pliku CMake.




## format pliku graf.txt:
Jest to lista sąsiedztwa rozszerzona o wartość krawędzi łączącej wierzchołki. 
Ilustrowany opis załączony jest jako "Opis_graf.txt"

Interpretacja poszczegulnych liczb w pliku graf.txt
- cyfra pierwsza: absolutny początek pliku, to całkowita liczba wierżchołków w grafie

- druga liczba: liczba sąsiadujących wierzchołków.

- trzecia liczba: "drógi koniec" krawędzi wychodzącyej z wierzchołka.

- czwarta liczba: wartość krawędzi; 

- liczby trzy i cztery powtażamy tyle razy ile zadeklarowaliśmy w w liczbie drugiej, następnie liczbę drugą, trzecią i czwartą powtarzamy tyle razy ile zadeklarowalićmy w liczbie 0.

jeżeli w pliku umieścimy więcej liczb niż należy, to może jść do niepoprawnego działania programu. Umieszczenie nadmiarowych liczb nie powinno powodować problemów, program po prostu je zignoruje.

Implementacja nie obsługuje wyjątków.
Należy unikać wprowadzania do algorytmu cyfr o wartości zbliżonej do INT32_MAX, ponieważ może doprowadzić to do niepoprawnego działania algorytmu zmiązanego z przekroczeniem zakresu zmiennych.

przykłady poprawnych plików:
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


