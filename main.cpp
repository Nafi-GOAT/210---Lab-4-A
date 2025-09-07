//
//  main.cpp
//  Lab 4 A
//
//  Created by Nafi on 9/6/25.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Struct definition
struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    // Seed random number generator
    srand(time(0));

    //  Generate a random number between 25 and 50
    int n = rand() % 26 + 25; // (0–25) + 25 → 25–50

    // Create vector of Color
    vector<Color> colors;

    //  Populate vector with random RGB values
    for (int i = 0; i < n; i++) {
        Color temp;
        temp.red   = rand() % 256; // 0–255
        temp.green = rand() % 256;
        temp.blue  = rand() % 256;
        colors.push_back(temp);
    }

    //  Print well-formatted table
    cout << left << setw(8) << "Color#"
         << setw(10) << "R value"
         << setw(10) << "G value"
         << setw(10) << "B value" << endl;
    cout << "--------------------------------------" << endl;

    for (int i = 0; i < colors.size(); i++) {
        cout << left << setw(8) << (i + 1)
             << setw(10) << colors[i].red
             << setw(10) << colors[i].green
             << setw(10) << colors[i].blue
             << endl;
    }

    return 0;
}

