#!/bin/zsh
HARICOT
make
rm -rf tests
mkdir tests

echo "\n"
echo "Log in the 'tests' directory!"

echo "\n"
HARICOT="./tests/HARICOT"
echo "Vive les haricots" > $HARICOT
./Sed_is_for_losers $HARICOT "Vive" "Je deteste"
echo "./Sed_is_for_losers $HARICOT 'Vive' 'Je deteste'" 
cat $HARICOT
cat $HARICOT.replace


echo "\n"
PIMENT="./tests/PIMENT"
echo "piment piment pimentpimentchilipoivrons pimentpimentpiment" > $PIMENT
./Sed_is_for_losers $PIMENT 'piment' 'avocat'
echo "./Sed_is_for_losers $PIMENT 'piment' 'avocat'" 
cat $PIMENT
cat $PIMENT.replace

echo "\n"
BIN="./tests/BIN"
echo "00 111000111 101010101 0" > $BIN
./Sed_is_for_losers $BIN '0' 'p'
echo "./Sed_is_for_losers $BIN '0' 'p'" 
cat $BIN
cat $BIN.replace