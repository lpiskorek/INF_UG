## Łukasz Piskorek, 202543 , zadanie 1

#!/bin/sh

funkcja1() {
echo -n "Wpisz x: "
read wpis
if [ $wpis -gt 0 ]
then
echo "f(x) = 1"
elif [ $wpis -eq 0 ]
then
echo "f(x) = 0"
else
echo "f(x) = -1"
fi
}

funkcja1
exit 0
