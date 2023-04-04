#!/bin/bash

input=0

while [ $input != 8 ]
do
	echo "1. File name: $name"
	echo "2. Path to directory: $directory_path"
	echo "3. File owner: $owner"
	echo "4. Last modified: $last_modified"
	echo "5. File size: $size"
	echo "6. File content: $content"
	echo "7. Search: "
	echo "8. Quit: "

	read input
	clear

	case "$input" in
		1)
			echo "Enter file name"
			read name
			if [ -z $name ]
			then 
				NAME=""
			else
				NAME="-name $name"
			fi
			;;
		2)
			echo "Enter path to directory"
			read directory_path
			if [ -z $directory_path ]
			then
				DIRECTORY_PATH=""
			else
				DIRECTORY_PATH="${directory_path}"
			fi
			;;
		3)
			echo "Enter file owner"
			read owner
			if [ -z $owner ]
			then
				OWNER=""
			else
				OWNER="-user $owner"
			fi
			;;
		4)
			echo "Enter how many days ago was the file modified"
			read last_modified
			if [ -z $last_modified ]
			then
				LAST_MODIFIED=""
			else
				LAST_MODIFIED="-mtime $last_modified"
			fi
			;;
		5)
			echo "Enter file size in bytes"
			read size
			if [ -z $size ]
			then
				SIZE=""
			else
				SIZE="-size ${size}c"
			fi
			;;
		6)
			echo "Enter file contents"
			read content
			if [ -z "$content" ]
			then
				CONTENT=""
			else
				CONTENT="-exec grep -l \"%content\" {} \;"
			fi
			;;
		7)
			find $DIRECTORY_PATH -type f $NAME $OWNER 
			$LAST_MODIFIED $SIZE $CONTENT
			;;
		8)
			input = 8
			;;
	esac
done

