#!/bin/bash

input=0

while true
do
	option1="1. Nazwa pliku: $nazwa"
	option2="2. Katalog: $katalog"
	option3="3. Wlasciciel: $wlasciciel"
	option4="4. Czas modyfikacji: $czas_modyfikacji"
	option5="5. Wielkosc pliku: $wielkosc_pliku"
	option6="6. Zawartosc pliku: $zawartosc"
	option7="7. Szukaj: "
	option8="8. Koniec: "

	Options=("$option1" "$option2" "$option3" "$option4" "$option5" 
	"$option6" "$option7" "$option8")
		input=$(zenity --list --column=Options "${Options[@]}" --height 350)

	case "$input" in
		$option1)
			nazwa=$(zenity --entry --text "Podaj nazwe pliku")
			if [ -z $nazwa ]
			then 
				szukana_nazwa=""
			else
				szukana_nazwa="-name $nazwa"
			fi
			;;
		$option2)
			katalog=$(zenity --entry --text "Podaj sciezke katalogu")
			if [ -z $katalog ]
			then
				szukany_katalog=""
			else
				szukany_katalog="${katalog}"
			fi
			;;
		$option3)
			wlasciciel=$(zenity --entry --text "Podaj wlasciciela pliku")
			if [ -z $wlasciciel ]
			then
				szukany_wlasciciel=""
			else
				szukany_wlasciciel="-user $wlasciciel"
			fi
			;;
		$option4)
			czas_modyfikacji=$(zenity --entry --text "Podaj ile dni temu plik byl modyfikowany")
			if [ -z $czas_modyfikacji ]
			then
				szukany_czas_modyfikacji=""
			else
				szukany_czas_modyfikacji="-mtime $czas_modyfikacji"
			fi
			;;
		$option5)
			wielkosc_pliku=$(zenity --entry --text "Podaj wielkosc pliku w bajtach")
			if [ -z $wielkosc_pliku ]
			then
				szukana_wielkosc_pliku=""
			else
				szukana_wielkosc_pliku="-size ${wielkosc_pliku}c"
			fi
			;;
		$option6)
			zawartosc=$(zenity --entry --text "Podaj zawartosc pliku")
			if [ -z "$zawartosc" ]
			then
				szukana_zawartosc=""
			else
				szukana_zawartosc="-exec grep -l \"$zawartosc\" {} \;"
			fi
			;;
		$option7)
			if wynik=$(find $szukany_katalog -type f $szukana_nazwa $szukany_wlasciciel 
			$szukany_czas_modyfikacji $szukana_wielkosc_pliku $szukana_zawartosc)
			then
				echo "$wynik" | zenity --text-info
			else
				zenity --error --text "Nie znaleziono pliku" 
			fi
			;;
		$option8)
			break
			;;
	esac
done

