#!/bin/bash
path="Documents/copied"
if [ $# -eq 0 ]
then
    echo "Nie podano zadnych argumentow!"
    exit 1
elif [ $# -gt 1 ]
then
    for filename in $@
    do
        cp $filename $path
    done
else
    numberOfLines=`find -name "*.$1" | wc -l`
    # wyszukujemy wszystkie pliki z danym rozszerzeniem, a potem zliczamy ilosc linii
    if [ $numberOfLines -eq 0 ] #jesli ilosc znalezionych linii jest rowna zero, to znaczy ze nie ma zadnego pliku z takim rozszerzeniem
    then
        echo "Nie znaleziono zadnego pliku z takim rozszerzeniem w tym katalogu, ani w zadnym podkatalogu"
    else
        find -name "*.$1" | xargs cp -v -t ~/$path
        # xargs robimy liste argumentow z kazdej linijki, ktora bedzie z polecenia find
        # -v wylistuje kazda operacje, ktora cp wykonalo
        # -t wyznaczamy, ze chcemy konkretnie przekopiowac do katalogu $path
        # -name wyszuka nam we wszystkich podkatalogach
    fi
fi