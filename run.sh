g++ -o test main.cpp sudoku_utils.cpp

ret=$?
if [ $ret -eq 0 ]; then
  ./test.exe
fi
