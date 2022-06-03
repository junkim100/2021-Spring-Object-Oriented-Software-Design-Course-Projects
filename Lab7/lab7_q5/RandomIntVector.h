#ifndef RandomIntVector_H
#define RandomIntVector_H

#include <vector>
#include <ctime>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class RandomIntVector : public std::vector<int>{

    private:
        //vector to store the randomly generated integer values
        vector<int> ril;
        
        int count;
        int total;
        double average;
        string output;
    
    public: 
        //constructor
        RandomIntVector(int);

        //getter functions
        int get_count() { return count; }
        int get_total();
        double get_average();
        string get_str();

};

#endif