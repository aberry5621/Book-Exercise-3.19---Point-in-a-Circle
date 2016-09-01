//
//  main.cpp
//  Book Exercise 3.19
//
//  Created by ax on 8/29/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Calculate if a point is inside or outside a circle centered at 0,0 with radius of 10
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    // insert code here...
    cout << "Calculate Distance Between Two Points \n";
    
    // D
    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;
    // container for square calculation
    double add_squares = 0.0;
    double dist_calc = 0.0;
    
    // I
    cout << "Enter a point with two coordinates: ";
    cin >> x1 >> y1;
    
    // P
    // sqrt dist calc of a is: pow(a, 0.5)
    add_squares = pow((x2 - x1), 2.0) + pow((y2 - y1), 2.0);
    dist_calc = pow(add_squares, 0.5);
    
    
    // O
    if (dist_calc <= 10) {
        cout << "Teh point (" << x1 << "," << y1 << ") in the circle" << endl;
    } else {
        cout << "Teh point (" << x1 << "," << y1 << ") is out the circle" << endl;
    }
    
    
    return 0;
    
}