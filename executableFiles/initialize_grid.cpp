#include<bits/stdc++.h>
#include"../src/grid.h"

using namespace std;

int main() {
    // Method 1: Use the constructor and pass in a
    // 2D matrix of values.
    sudoku::Grid grid({{
        {{ 0, 0, 0, 0, 0, 0, 6, 8, 0 }},
        {{ 0, 0, 0, 0, 7, 3, 0, 0, 9 }},
        {{ 3, 0, 9, 0, 0, 0, 0, 4, 5 }},
        {{ 4, 9, 0, 0, 0, 0, 0, 0, 0 }},
        {{ 8, 0, 3, 0, 5, 0, 9, 0, 2 }},
        {{ 0, 0, 0, 0, 0, 0, 0, 3, 6 }},
        {{ 9, 6, 0, 0, 0, 0, 3, 0, 8 }},
        {{ 7, 0, 0, 6, 8, 0, 0, 0, 0 }},
        {{ 0, 2, 8, 0, 0, 0, 0, 0, 0 }}
    }});
    cout << grid << endl;

    // Method 2: Declare a 2D array and pass it
    // into the set_initial_state() method.

    array<array<int, 9>, 9> values = {{
        {{ 9, 7, 8, 4, 1, 0, 0, 0, 5 }},
        {{ 3, 0, 0, 8, 0, 0, 0, 6, 4 }},
        {{ 6, 0, 0, 3, 5, 0, 0, 9, 0 }},
        {{ 2, 6, 9, 0, 3, 0, 0, 0, 7 }},
        {{ 5, 0, 7, 1, 0, 0, 0, 0, 0 }},
        {{ 1, 0, 3, 0, 0, 2, 0, 8, 9 }},
        {{ 7, 1, 0, 2, 0, 5, 0, 0, 3 }},
        {{ 0, 0, 2, 7, 0, 3, 1, 5, 8 }},
        {{ 0, 0, 5, 9, 4, 1, 0, 0, 0 }}
    }};
    grid.set_initial_state(values);
    cout << grid << endl;

    // Method 3: Read the initial state of the puzzle
    // from a file.

    grid.set_initial_state_from_file("samples/sample1.txt");
    cout << grid << endl;

    return 0;
}