#include <vector>
#include "sudoku_utils.h"
using namespace std;

void print(vector<vector<int>> board) {
  cout << endl;
  for(int i=0; i<9; i++) {
    for(int j=0; j<9; j++) {
      if(j%3 == 0) {
        cout << " ";
      }
      cout << board[i][j] << " ";
    }
    if(i%3 == 2) {
      cout << endl;
    }
    cout << endl;
  }
};
