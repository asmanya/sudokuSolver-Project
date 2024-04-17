#include<bits/stdc++.h>
#include"../src/sudoku_solver.h"

using namespace std;

int main() {
    sudoku::Grid grid;
    grid.set_initial_state_from_file("samples/sample1.txt");
    cout << grid << endl;

    sudoku::solve(&grid);
    cout << grid << endl;

    return 0;
}