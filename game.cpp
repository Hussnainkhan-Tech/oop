#include <iostream>
#include <array>
#include <cctype>

using namespace std;

void showBoard(const array<char,9>& b) {
    cout << "\n";
    cout << " " << b[0] << " | " << b[1] << " | " << b[2] << "      1 | 2 | 3\n";
    cout << "---+---+---    ---+---+---\n";
    cout << " " << b[3] << " | " << b[4] << " | " << b[5] << "      4 | 5 | 6\n";
    cout << "---+---+---    ---+---+---\n";
    cout << " " << b[6] << " | " << b[7] << " | " << b[8] << "      7 | 8 | 9\n\n";
}

bool win(const array<char,9>& b, char p) {
    static const int w[8][3] = {
        {0,1,2},{3,4,5},{6,7,8}, // rows
        {0,3,6},{1,4,7},{2,5,8}, // cols
        {0,4,8},{2,4,6}          // diagonals
    };
    for (auto &c : w) if (b[c[0]]==p && b[c[1]]==p && b[c[2]]==p) return true;
    return false;
}

bool full(const array<char,9>& b) {
    for (char c : b) if (c==' ') return false;
    return true;
}

int getMove(const array<char,9>& b, char player) {
    while (true) {
        cout << "Player " << player << " turn (1-9): ";
        string s; 
        if (!(cin >> s)) return -1;
        if (s.size()==1 && isdigit(s[0])) {
            int pos = s[0]-'0';
            if (1<=pos && pos<=9) {
                if (b[pos-1]==' ') return pos-1;
                cout << "That spot is already taken. Try again.\n";
            } else {
                cout << "Enter a number 1-9.\n";
            }
        } else {
            cout << "Enter a number 1-9.\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "=== Tic Tac Toe (2 Players) ===\n";
    while (true) {
        array<char,9> board{};
        board.fill(' ');
        char player = 'X';

        showBoard(board);

        while (true) {
            int mv = getMove(board, player);
            if (mv < 0) return 0;
            board[mv] = player;
            showBoard(board);

            if (win(board, player)) {
                cout << "Player " << player << " WINS! 🎉\n";
                break;
            }
            if (full(board)) {
                cout << "It's a DRAW! 🤝\n";
                break;
            }
            player = (player=='X' ? 'O' : 'X');
        }

        cout << "Play again? (y/n): ";
        char ans; 
        if (!(cin >> ans) || tolower(ans)!='y') break;
    }

    cout << "Thanks for playing!\n";
    return 0;
}
