#include "RandomIntVector.h"

using namespace std;

RandomIntVector::RandomIntVector(int count) {

    this->count = count;

    //generate random number from 1 to 100 and push back to the ril
    srand(time(NULL));
    for (int i = 0; i < count; i++) {
        ril.push_back(rand()%(100) + 1);
    }

}

int RandomIntVector::get_total() {
    total = 0;
    //calculate total
    for (int i = 0; i < count; i++) {
        total += ril[i];
    }
    return total;
}

double RandomIntVector::get_average() {
    //calculate average but do a type conversion from int to double
    average = (double) total / (double) count;
    return average;
}

string RandomIntVector::get_str() {

    for (int i = 0; i < count; i++) {

        //type conversion from int to string because we are appending this value to a string
        string c = std::to_string(ril[i]);

        //append the value to the output string
        output.append(c);

        //the program shouldn't put a comma at the very end
        if(i != count-1)
            output.append(", ");

    }

    return output;
    
}
