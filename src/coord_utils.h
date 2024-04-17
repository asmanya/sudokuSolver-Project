#ifndef SRC_COORD_UTILS_H_
#define SRC_COORD_UTILS_H_

#include<bits/stdc++.h>
#include"../src/coord.h"

using namespace std;

namespace sudoku {

Coord get_next_cell_coord(Coord coord) {
    if (coord.second == GRID_LEN-1 && coord.first == GRID_LEN-1)
        return coord;
    else if (coord.second == GRID_LEN-1)
        return make_pair(coord.first+1, 0);
    return make_pair(coord.first, coord.second + 1);
}

set<Coord> get_N_random_cell_coords(int n) {
    random_device rd;  // obtain a random number from hardware
    mt19937 gen(rd());  // seed the generator
    uniform_int_distribution<> distr(0, GRID_LEN-1);  // define the range

    set<Coord> random_cell_coords;

    while (n > 0) {
        auto cell_coord = make_pair(distr(gen), distr(gen));
        auto inserted = random_cell_coords.insert(cell_coord);

        if (!inserted.second) continue;  // Element already existed.
        n--;
    }

    return random_cell_coords;
}

}  // namespace sudoku

#endif  // SRC_COORD_UTILS_H_