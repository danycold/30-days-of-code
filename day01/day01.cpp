#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int a;
    double b;
    string c;
    // Read and save an integer, double, and String to your variables.
    cin >> a;
    cin >> b; 
    if (getline(cin >> ws, c)) { // eat whitespace
    getline(cin, c);
    }
    // Print the sum of both integer variables on a new line.
    cout << i + a << endl;
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d + b << endl;
    // Concatenate and print the String variables on a new line
    cout << s + c;
    // The 's' variable above should be printed first.
}
