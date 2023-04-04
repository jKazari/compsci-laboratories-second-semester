#!/bin/bash

while true
do
	option1="1. File name: $name"
	option2="2. Path to directory: $directory_path"
	option3="3. File owner: $owner"
	option4="4. Last modified: $last_modified"
	option5="5. File size: $size"
	option6="6. File content: $content"
	option7="7. Search: "
	option8="8. Quit: "

	OPTIONS=("$option1" "$option2" "$option3" "$option4" "$option5" 
	"$option6" "$option7" "$option8")
		input=$(zenity --list --column=OPTIONS "${OPTIONS[@]}" --height 350)

	case "$input" in
		$option1)
			name=$(zenity --entry --text "Enter file name")
			if [ -z $name ]
			then 
				NAME=""
			else
				NAME="-name $name"
			fi
			;;
		$option2)
			directory_path=$(zenity --entry --text "Enter path to directory")
			if [ -z $directory_path ]
			then
				DIRECTORY_PATH=""
			else
				DIRECTORY_PATH="${directory_path}"
			fi
			;;
		$option3)
			owner=$(zenity --entry --text "Enter file owner")
			if [ -z $owner ]
			then
				OWNER=""
			else
				OWNER="-user $owner"
			fi
			;;
		$option4)
			last_modified=$(zenity --entry --text "Enter how many days ago 
			was the file modified")
			if [ -z $last_modified ]
			then
				LAST_MODIFIED=""
			else
				LAST_MODIFIED="-mtime $last_modified"
			fi
			;;
		$option5)
			size=$(zenity --entry --text "Enter file size in bytes")
			if [ -z $size ]
			then
				SIZE=""
			else
				SIZE="-size ${size}c"
			fi
			;;
		$option6)
			content=$(zenity --entry --text "Enter file contents")
			if [ -z "$content" ]
			then
				CONTENT=""
			else
				CONTENT="-exec grep -l \"$content\" {} \;"
			fi
			;;
		$option7)
			if find_result=$(find $DIRECTORY_PATH -type f $NAME $OWNER 
			$LAST_MODIFIED $SIZE $CONTENT)
			then
				echo "$find_result" | zenity --text-info
			else
				zenity --error --text "File not found" 
			fi
			;;
		$option8)
			break
			;;
	esac
done

