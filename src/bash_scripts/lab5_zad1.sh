#!/bin/bash
if [ $# -lt 5 ]
then
    echo 'Podano mniej niz 5 argumentow, abort mission!'
    exit 1
fi
suma=0
for numer in "$@"
do
    if [[ $numer == ?(-)+([0-9]) ]]
    then
        echo "super, $numer jest to liczba, dodaje do calosci"
        suma=$((suma+numer))
    else
        echo $numer to nie jest liczba, wroc jak dowiesz sie, czym sa liczby!
        exit 1
    fi
    # if [ $number == ?(-)+([0-9]) ]
    # then
    # echo $number jest liczba
    # else
    # echo $number nie jest liczba
    # fi
done

echo "suma wyszla $suma, dziekuje za uwage dobranoc"