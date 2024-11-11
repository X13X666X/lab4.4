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
    cout << "-------------------------" << endl;
    cout << "|   x    |     y       |" << endl;
    cout << "-------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x < 0) 
            y = -4;
        
        else 
            if (x >= 0 && x < 1) 
                y = x;
        
            else 
                if (x >= 1 && x <= 2) 
                    y = pow(x, 2);
        
                else 
                    if (x > 2 && x <= 10) 
                        y = (-3.0 / 4) * x + 11.0 / 2;
        
                    else {
                        y = 0;
        }

        cout << "| " << setw(7) << setprecision(2) << x
            << " | " << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }

    cout << "-------------------------" << endl;
    return 0;
}
