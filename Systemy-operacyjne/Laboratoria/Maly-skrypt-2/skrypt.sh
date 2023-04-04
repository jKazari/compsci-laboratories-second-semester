#!/bin/bash

input=0

while [ $input != 8 ]
do
	echo "1. Nazwa pliku: $nazwa"
	echo "2. Katalog: $katalog"
	echo "3. Wlasciciel: $wlasciciel"
	echo "4. Czas modyfikacji: $czas_modyfikacji"
	echo "5. Wielkosc pliku: $wielkosc_pliku"
	echo "6. Zawartosc pliku: $zawartosc"
	echo "7. Szukaj: "
	echo "8. Koniec: "

	read input
	clear

	case "$input" in
		1)
			echo "Podaj nazwe pliku"
			read nazwa
			if [ -z $nazwa ]
			then 
				szukana_nazwa=""
			else
				szukana_nazwa="-name $nazwa"
			fi
			;;
		2)
			echo "Podaj katalog"
			read katalog
			if [ -z $katalog ]
			then
				szukany_katalog=""
			else
				szukany_katalog="${katalog}"
			fi
			;;
		3)
			echo "Podaj wlasciciela pliku"
			read wlasciciel
			if [ -z $wlasciciel ]
			then
				szukany_wlasciciel=""
			else
				szukany_wlasciciel="-user $wlasciciel"
			fi
			;;
		4)
			echo "Podaj ile dni temu plik byl modyfikowany"
			read czas_modyfikacji
			if [ -z $czas_modyfikacji ]
			then
				szukany_czas_modyfikacji=""
			else
				szukany_czas_modyfikacji="-mtime $czas_modyfikacji"
			fi
			;;
		5)
			echo "Podaj wielkosc pliku w bajtach"
			read wielkosc_pliku
			if [ -z $wielkosc_pliku ]
			then
				szukana_wielkosc_pliku=""
			else
				szukana_wielkosc_pliku="-size ${wielkosc_pliku}c"
			fi
			;;
		6)
			echo "Podaj zawartosc pliku"
			read zawartosc
			if [ -z "$zawartosc" ]
			then
				szukana_zawartosc=""
			else
				szukana_zawartosc="-exec grep -l \"%zawartosc\" {} \;"
			fi
			;;
		7)
			find $szukany_katalog -type f $szukana_nazwa $szukany_wlasciciel 
			$szukany_czas_modyfikacji $szukana_wielkosc_pliku $szukana_zawartosc
			;;
		8)
			input = 8
			;;
	esac
done

