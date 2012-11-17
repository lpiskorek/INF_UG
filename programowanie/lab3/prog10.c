## Łukasz Piskorek | 202543 |
## Zadanie 3 : Napisz rekurencyjną definicję funkcji obliczającą silnię ze
## swojego argumentu. (n!=1*2*3*...*n) Przetestuj działanie tej funkcji.
##

#!/bin/bash

funkcja () {
echo "Wpisz liczbę dla której będziesz liczył silnie >>"
read a
if [ $a -eq 0 ]
then
echo "$a"
   exit 1
else
silnia=1
for (( i=1; i<=a; i++ ))
do
silnia=`expr $silnia \* $i`
done

