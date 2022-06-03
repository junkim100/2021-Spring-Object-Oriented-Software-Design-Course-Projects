#ifndef Rect_H
#define Rect_H

#include <cstdlib>
#include <iostream>

using namespace std;

class Rect {

    private:
        int height;
        int width;
        int perimeter;
        int area;

        int calc_perimeter(int, int);
        int calc_area(int, int);

    public:
        //constructor
        Rect(int, int);

        void string_representation();

        //setters and getters for data members
        void set_height(int);
        int get_height() const { return height; }

        void set_width(int);
        int get_width() const { return width; }

        int get_perimeter() const { return perimeter; }
        int get_area() const { return area; };

};

#endif