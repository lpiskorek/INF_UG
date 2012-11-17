#!/bin/bash
tab=('Maciek' 'Łukasz' 'Radek' 'Krzysiek' 'Rafał')
LI=0
function sortowanie()
{
    for ((i=0;i!=LI;i++))
    do
for ((j=i+1;j!=LI;j++))
        do
if [ ${LI[j]} -lt ${LI[i]} ]
            then
TMP=${LI[j]}
                tab[j]=${LI[i]}
                tab[i]=$TMP
            fi
done
done
}


echo ${tab[i]}
i=$(($i+1))
sortowanie

exit 0
