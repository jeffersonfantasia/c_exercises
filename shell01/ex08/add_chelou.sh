#!/bin/sh
echo "$FT_NBR1 + $FT_NBR2" | tr "mrdoc" "01234" | sed 's/'\''/0/g ; s/\\/1/g ; s/"/2/g ; s/?/3/g ; s/!/4/g' | xargs echo "ibase=5; obase=D;" | bc | tr '0123456789ABC' 'gtaio luSnemf'