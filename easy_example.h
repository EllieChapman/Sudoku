#ifndef EASY_EXAMPLE
#define EASY_EXAMPLE

#include <vector>
using namespace std;


vector<string> input_test1 = {"104  000  306",
                        "809  030  570",
                        "000  070  100",

                        "426  000  003",
                        "087  006  012",
                        "300  000  009",

                        "241  900  030",
                        "000  200  080",
                        "700  503  000"};

vector<vector<int>> input_test2 = {{1,2}, {3,4}};

vector<vector<int>> input = {{1,0,4,0,0,0,3,0,6},
                             {8,0,9,0,3,0,5,7,0},
                             {0,0,0,0,7,0,1,0,0},
                             {4,2,6,0,0,0,0,0,3},
                             {0,8,7,0,0,6,0,1,2},
                             {3,0,0,0,0,0,0,0,9},
                             {2,4,1,9,0,0,0,3,0},
                             {0,0,0,2,0,0,0,8,0},
                             {7,0,0,5,0,3,0,0,0}};




                              // '174 895 326',
                            	// '869 132 574',
                            	// '532 674 198',
                              //
                            	// '426 719 853',
                            	// '987 356 412',
                            	// '315 428 769',
                              //
                            	// '241 987 635',
                            	// '653 241 987',
                            	// '798 563 241',

vector<vector<int>> answer = {{1,7,4,8,9,5,3,2,6},
                              {8,6,9,1,3,2,5,7,4},
                              {5,3,2,6,7,4,1,9,8},
                              {4,2,6,7,1,9,8,5,3},
                              {9,8,7,3,5,6,4,1,2},
                              {3,1,5,4,2,8,7,6,9},
                              {2,4,1,9,8,7,6,3,5},
                              {6,5,3,2,4,1,9,8,7},
                              {7,9,8,5,6,3,2,4,1}};

#endif
