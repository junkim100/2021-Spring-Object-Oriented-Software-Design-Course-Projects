/*
*   Author: Dong Jun Kim
*   Purpose: The purpose of the code is to read the FIFA Champions data and print out country, number of their wins, and the year won alphabetically
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {

    //map that will store country, wins, years value
    map<string, vector<string> > mymap{};

    cout << "FIFA World Cup Winners\n\n" << "Country" << setw(17) << "Wins" << setw(12) << "Years\n" <<"=======" << setw(17) << "====" << setw(12) << "=====\n";

    //open file
    ifstream infile;
    infile.open("world_cup_champions.txt");
    
    string line;

    //skip first line
    getline(infile, line);
    
    int count = 0;
    while (infile){

        //vector that stores country data and will be put into mymap later
        vector<string>words;

        //for prevent program from reading last line twice
        if(count == 21)
            break;

        //read next line
        getline(infile, line);

        //loop each character of the line until \t is found
        int prev=0;
        for(int i = 0; i < line.length(); i++){
            
            //if \t is found, divide the string and store the string left to the tab and push it to words vector
            if(line[i]==9){
               string new_word = line.substr(prev,i-prev);
               words.push_back(new_word);
               prev=i+1;
           }

        }

        //store the linked country data (map)
        mymap[words[1]].push_back(words[0]);

        count++;
    }

    //print results
    for (auto i : mymap) {

        cout << left << setw(20) << i.first;

        //number of wins is the size of i.second
        cout << setw(10) << i.second.size();

        for (int j = 0; j < i.second.size(); j++){
            cout << i.second[j];
            if(j != i.second.size() - 1){
               cout<<", ";
            }
        }

        cout<<endl;

    }

    infile.close();
    
}
