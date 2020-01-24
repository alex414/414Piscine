cat /etc/passwd | grep -v "#" | sed -E "s/[:].+//g" | awk "NR%2==0" | rev | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | sed "s/$/\, /" | sed '$s/\, /\./g' | tr -d "\n" 
