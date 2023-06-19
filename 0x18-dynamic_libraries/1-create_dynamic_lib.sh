#!/bin/bash
all_my_c_files=$(find . -maxdepth 1 -type f -name "*.c" | sort)
o_file=""
for myFile in $all_my_c_files; do
    object_file=$(basename "$myFile" ".c").o
    gcc -c -fPIC "$myFile" -o "o_file"
    o_file+=" $o_file"
done
gcc -shared -o liball.so o_file
rm -f o_file
