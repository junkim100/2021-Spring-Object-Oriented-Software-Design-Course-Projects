#include "Rect.h"

using namespace std;

//constructor
Rect::Rect(int height_param, int width_param) {
    //sets height and width then calculates perimeter and area
    set_height(height_param);
    set_width(width_param);
    perimeter = calc_perimeter(height, width);
    area = calc_area(height, width);
}

//private function

int Rect::calc_perimeter(int height, int width) {
    return 2*(height + width);
}

int Rect::calc_area(int height, int width) {
    return height * width;
}



//public function

void Rect::string_representation() {

    //print first line
    for (int i = 0; i < get_width(); i++) {
        cout << "* ";
    }
    cout << endl;

    //space between the two stars in the middle lines
    int space = 2*get_width() - 3;

    //print middle lines
    for (int i = 0; i < get_height() - 2; i++) {
        cout << '*';
        for (int j = 0; j < space; j++) {
            cout << ' ';
        }
        cout << '*' << endl;
    }

    //print last line
    for (int i = 0; i < get_width(); i++) {
        cout << "* ";
    }

}

void Rect::set_height(int height) {
    this->height = height;
}

void Rect::set_width(int width) {
    this->width = width;
}