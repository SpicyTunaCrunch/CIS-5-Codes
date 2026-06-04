#include <iostream> //input otput library
#include <iomanip> //formatiing 
#include <cmath> //math library
#include <cstdlib> //random seed
#include <ctime> //random seed

using namespace std;

int main() {
    //Local variables (<=7 chars)
    char c1, c2, c3, c4, c5, c6, c7; // actual cells with ships 'S'
    char p1, p2, p3, p4, p5, p6, p7; // player's view: '~', 'O', 'X'
    unsigned short 
    coord, 
    hits = 0;    // hits made
    unsigned short atts = 0;    // attempts made
    char again = 'n';           // replay flag
    // Seed RNG
    srand(static_cast<unsigned int>(time(0)));

    do {
        // Init boards
        c1 = c2 = c3 = c4 = c5 = c6 = c7 = '~';
        p1 = p2 = p3 = p4 = p5 = p6 = p7 = '~';

        // Place 3 ships randomly (distinct)
        unsigned short placed = 0;
        while (placed < 3) {
            unsigned short pos = static_cast<unsigned short>(rand() % 7 + 1);
            if (pos == 1 && c1 == '~') { c1 = 'S'; placed++; }
            else if (pos == 2 && c2 == '~') { c2 = 'S'; placed++; }
            else if (pos == 3 && c3 == '~') { c3 = 'S'; placed++; }
            else if (pos == 4 && c4 == '~') { c4 = 'S'; placed++; }
            else if (pos == 5 && c5 == '~') { c5 = 'S'; placed++; }
            else if (pos == 6 && c6 == '~') { c6 = 'S'; placed++; }
            else if (pos == 7 && c7 == '~') { c7 = 'S'; placed++; }
        }

        hits = 0;
        atts = 0;

        // Print header and initial board
        cout << "\n   ";
        for (int i = 1; i <= 7; ++i) cout << setw(2) << i;
        cout << "\n\n";
        cout << "A  " << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << " " << p6 << " " << p7 << "\n";

        // Game loop
        while (hits < 3) {
            unsigned short col = 0;
            bool valid = false;

            // Input validation
            while (!valid) {
                cout << "\nChoose where to hit (1 - 7): ";
                cin >> coord;
                if (coord >= 1 && coord <=7){
                    valid = true;
                } else {
                    cout << "Invalid. Try again.\n";
                }
            }

            // Process shot
            bool newHit = false;
            switch (col) {
                case 1:
                    if (c1 == 'S') { c1 = 'X'; hits++; newHit = true; }
                    else if (c1 == '~') { c1 = 'O'; }
                    break;
                case 2:
                    if (c2 == 'S') { c2 = 'X'; hits++; newHit = true; }
                    else if (c2 == '~') { c2 = 'O'; }
                    break;
                case 3:
                    if (c3 == 'S') { c3 = 'X'; hits++; newHit = true; }
                    else if (c3 == '~') { c3 = 'O'; }
                    break;
                case 4:
                    if (c4 == 'S') { c4 = 'X'; hits++; newHit = true; }
                    else if (c4 == '~') { c4 = 'O'; }
                    break;
                case 5:
                    if (c5 == 'S') { c5 = 'X'; hits++; newHit = true; }
                    else if (c5 == '~') { c5 = 'O'; }
                    break;
                case 6:
                    if (c6 == 'S') { c6 = 'X'; hits++; newHit = true; }
                    else if (c6 == '~') { c6 = 'O'; }
                    break;
                case 7:
                    if (c7 == 'S') { c7 = 'X'; hits++; newHit = true; }
                    else if (c7 == '~') { c7 = 'O'; }
                    break;
                default:
                    break;
            }

            atts++;

            // Update player view
            if (c1 == 'X') p1 = 'X'; else if (c1 == 'O' && p1 == '~') p1 = 'O';
            if (c2 == 'X') p2 = 'X'; else if (c2 == 'O' && p2 == '~') p2 = 'O';
            if (c3 == 'X') p3 = 'X'; else if (c3 == 'O' && p3 == '~') p3 = 'O';
            if (c4 == 'X') p4 = 'X'; else if (c4 == 'O' && p4 == '~') p4 = 'O';
            if (c5 == 'X') p5 = 'X'; else if (c5 == 'O' && p5 == '~') p5 = 'O';
            if (c6 == 'X') p6 = 'X'; else if (c6 == 'O' && p6 == '~') p6 = 'O';
            if (c7 == 'X') p7 = 'X'; else if (c7 == 'O' && p7 == '~') p7 = 'O';

            // Print board
            cout << "\n   ";
            for (int i = 1; i <= 7; ++i) cout << setw(2) << i;
            cout << "\n\n";
            cout << "A  " << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << " " << p6 << " " << p7 << "\n";

            cout << (newHit ? "HIT!\n" : "MISS!\n");

            // Progress and demos: sizeof, pow, casting, formatting
            cout << "Hits: " << setw(3) << hits << "  Attempts: " << setw(3)<< atts;
          
        }

        cout << "\nYou Won!!!\n";

        cout << "Would you like to play again? (y/n): ";
        cin >> again;

    } while (again == 'Y' || again == 'y');


    return 0;

}
