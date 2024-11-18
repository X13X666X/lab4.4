#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x, y, xp, xk, dx;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "------------------------" << endl;
    cout << "|   x     |     y      |" << endl;
    cout << "------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -4) {
            y = -2;
        }
        else {
            if (x > -4 && x < 0) {
                y = x / 4;  //  y = x / 4,інтервал (-4, 0)
            }
            else {
                if (x >= 0 && x < 2) {
                    y = x * x;  // y = x^2 інтервал [0, 2)
                }
                else {
                    if (x >= 2) {
                        y = 5 - x / 2;  // y = 5 - x / 2 інтервал [2, ∞)
                    }
                }
            }
        }

        cout << "| " << setw(7) << setprecision(2) << x
            << " | " << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }

    cout << "------------------------" << endl;
    return 0;
}
