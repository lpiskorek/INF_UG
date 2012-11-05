## Bash i AWK - Petle/case - zadanie 3

#!/bin/bash

echo 'Czy jesteś człowiekiem?'
read raz

case $raz in
        [tT][aA][kK]|[tT]) echo 'Twoja odp. to Tak' ;;
        [nN][iI][eE]|[nN]) echo 'Twoja odp. to Nie' ;;
        *) echo 'Nic nie wpisałeś'
esac
