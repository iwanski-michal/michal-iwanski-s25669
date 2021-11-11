#!/bin/bash
BAZA="baza.txt"
if [ -f $BAZA ]
then
    echo "Baza istnieje."
else
    echo "Baza nie istnieje, tworze baze..."
    printf "IMIE:NAZWISKO:WIEK:PLEC\n" | column -t -s ':' > baza.txt
    sleep 2
    echo "baza utworzona!"
fi

if [ $# -eq 0 ]
then
    echo nie podano zadnych argumentow, podaj je teraz!
    read args
    echo podano nastepujace argumenty:
    sleep 1
    echo ----------------------
    echo $args
    echo ----------------------
    sleep 1
    echo "zapisuje do bazy, please stand by"
    echo $args >> baza.txt
    sleep 2
    echo "zapisano. Dziekuje za uwage. Dobranoc"
elif [ $# -gt 4 ]
then
    echo "Podano wiecej niz 4 argumenty, baza ma tylko 4 kolumny przykro mi."
    exit 1
else
    echo -e "$1 \t $2 \t $3 \t $4" >> baza.txt
    echo podano $1 $2 $3 $4
    echo "zapisano dane do bazy"
fi
