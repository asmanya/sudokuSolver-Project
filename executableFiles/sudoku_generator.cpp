#include<bits/stdc++.h>
#include"../src/sudoku_generator.h"

using namespace std;

int main() {
    sudoku::Grid grid = sudoku::generate_puzzle();
    cout << grid << endl;

    return 0;
}