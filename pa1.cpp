//
// Created by Ivo Georgiev on 8/25/15.
//
//Edited by Bryan Wheeler

#include "Point.h"
#include <iostream>
#include <cmath>
#include <iomanip>



double computeArea(Point &a, Point &b, Point &c) {

    double d,e,f,s,area;

    d = a.distanceTo(b);
    e = a.distanceTo(c);
    f = b.distanceTo(c);

    s = (d+e+f)/2;

    area = sqrt(( s*(s-d)) * (s-e) * (s-f) );

    return area;

}



int main() {
    double x, y, z;
    double area;
    Point a, b, c;




    std::cout << "This program takes in user inputted coordinates to create three points on some plane.\n";
    std::cout << "Three coordinates will be used for each point for a total of 9 coordinates inputted by the user\n\n";

    for(int i = 0; i < 3; i++) {

        std::cout << "Please enter three coordinates for X, Y, then Z, followed by the Enter key after each coordinate.\n";
        std::cout << "For point " << i+1 << ".\n";
        std::cout << "Coordinate X: "; std::cin >> x;
        std::cout << "Coordinate Y: "; std::cin >> y;
        std::cout << "Coordinate Z: "; std::cin >> z;
        std::cout << "\n";

        switch(i) {
            case 0: a.setX(x);
                    a.setY(y);
                    a.setZ(z);
                break;

            case 1: b.setX(x);
                    b.setY(y);
                    b.setZ(z);
                break;

            case 2: c.setX(x);
                    c.setY(y);
                    c.setZ(z);
                break;

            default: std::cout << "Hopefully won't reach" << std::fixed << std::setprecision(2) << area;
        }

    }

    area = computeArea(a,b,c);

    std::cout << "The area of the triangle formed by the three points is: " << area;

    return 0;
}

