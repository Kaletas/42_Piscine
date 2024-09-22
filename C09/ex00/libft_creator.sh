#!/bin/bash

# Nazwa biblioteki
LIB_NAME="libft.a"

# Folder, gdzie znajdują się pliki źródłowe C
SRC_DIR="."

# Kompilator
CC="gcc"

# Flagi kompilacji
CFLAGS="-Wall -Wextra -Werror"

# Usuwa istniejącą bibliotekę
if [ -f $LIB_NAME ]; then
    rm -f $LIB_NAME
fi

# Kompilacja każdego pliku .c w folderze
for file in $SRC_DIR/*.c; do
    $CC $CFLAGS -c $file -o "${file%.c}.o"
done

# Tworzenie biblioteki statycznej z plików .o
ar rcs $LIB_NAME $SRC_DIR/*.o

# Czyszczenie plików obiektowych (.o)
rm -f $SRC_DIR/*.o

echo "Library $LIB_NAME created successfully!"
