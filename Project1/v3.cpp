#include <iostream> //input otput library
#include <iomanip> //formatiing 
#include <cmath> //math library
#include <cstdlib> //random seed
#include <ctime> //random seed

using namespace std;

int main() {
    // Use arrays for boards (1..7)
    char c[8]; // actual board: '' empty, 'S' ship, 'X' hit, 'O' miss
    char p[8]; // player view: '', 'X', 'O'
    unsigned short hits = 0;
    unsigned short atts = 0;
    char again = 'n';
    string coord;
srand(static_cast<unsigned int>(time(0)));

// PSEUDO: init boards, place SHIPS distinct, loop until hits == SHIPS

do {
    // init boards
    for (int r = 0; r < R; ++r)
        for (int col = 0; col < C; ++col) {
            c[r][col] = '~';
            p[r][col] = '~';
        }

    // place SHIPS at distinct random cells
    int placed = 0;
    while (placed < SHIPS) {
        int rr = rand() % R;
        int cc = rand() % C;
        if (c[rr][cc] == '~') {
            c[rr][cc] = 'S';
            ++placed;
        }
    }

    hits = 0;
    atts = 0;

    // print header & initial board
    cout << "\n    ";
    for (int col = 1; col <= C; ++col) cout << setw(2) << col;
    cout << "\n\n";
    for (int r = 0; r < R; ++r) {
        char rowL = 'A' + r;
        cout << rowL << "   ";
        for (int col = 0; col < C; ++col) {
            cout << p[r][col] << (col < C-1 ? ' ' : '\n');
        }
    }

    // game loop
    while (hits < SHIPS) {
        int row = -1, coln = -1;
        bool valid = false;

        while (!valid) {
            cout << "\nChoose where to hit (A1..F6): ";
            cin >> coord;
            if (coord.size() >= 2) {
                char rch = coord[0];
                char cch = coord[1];
                if ((rch >= 'A' && rch <= 'F') || (rch >= 'a' && rch <= 'f')) {
                    row = (rch >= 'a') ? (rch - 'a') : (rch - 'A');
                    if (coord.size() == 3 && coord[1] == '1' && coord[2] == '0') {
                        // ignore (not possible here)
                    }
                    if (cch >= '1' && cch <= '6') {
                        coln = cch - '1';
                        valid = true;
                    }
                }
            }
            if (!valid) cout << "Invalid input. Use A1..F6. Try again.\n";
        }

        bool newHit = false;
        if (c[row][coln] == 'S') { c[row][coln] = 'X'; ++hits; newHit = true; }
        else if (c[row][coln] == '~') { c[row][coln] = 'O'; }

        ++atts;

        // update player view
        if (c[row][coln] == 'X') p[row][coln] = 'X';
        else if (c[row][coln] == 'O' && p[row][coln] == '~') p[row][coln] = 'O';

        // print board
        cout << endl;
        cout << "    ";
        for (int col = 1; col <= C; ++col) cout << setw(2) << col;
        cout << "\n\n";
        for (int r = 0; r < R; ++r) {
            char rowL = 'A' + r;
            cout << rowL << "   ";
            for (int col = 0; col < C; ++col) {
                cout << p[r][col] << (col < C-1 ? ' ' : '\n');
            }
        }

        cout << (newHit ? "HIT!\n" : "MISS!\n");

        // progress demo
        float pct = (static_cast<float>(hits) / static_cast<float>(SHIPS)) * 100.0f;
        float score = pow(static_cast<float>(hits), 2.0f);
        cout << "Hits: " << hits << "  Attempts: " << atts
             << "  Progress: " << fixed << setprecision(1) << pct << "%\n";
        cout << "Score(calc): " << score << "  Sizeof char: " << sizeof(char) << "\n";
    }

    cout << "\nYou Won!!!\n";
    cout << "Total attempts: " << atts << "\n";

    cout << "Would you like to play again? (y/n): ";
    cin >> again;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

} while (again == 'Y' || again == 'y');

return 0;
}