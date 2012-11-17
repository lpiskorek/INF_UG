
## Łukasz Piskorek | 202543 |
## Zadanie 2 : Napisz funkcję obliczającą a do potęgi n, a - liczba naturalna (bez zera), n - liczba naturalna (z zerem).
## Funkcja ma posiadać dwa argumenty a i n.

#!/bin/bash

funkcja () {
echo -n "Wpisz a : "
read a
if [ $a -gt 0 ]
then
echo "Wpisana liczba to >> $a <<"
else
echo "Wpisz a - liczba naturalna (bez zera) >> "
fi
echo -n "Wpisz n : "
read n
if [ $n -ge 0 ]
then
echo "Wpisana liczba to >> $n <<"
else
echo "Wpisz n - liczba naturalna (z zerem) >> "
fi


x=$a
y=$n
let potega=x**y
echo "Potęga o >a=$x< i >n=$y< wynosi ~~$potega~~"
}

funkcja
exit 0
