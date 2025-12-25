#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    double min, max;
    int count = 0;
    ifstream source("score.txt");
    string textline;


    cout << "Enter range of the scores [min, max] for counting: ";
    cin >> min >> max;

    if(min > max){
        cout << "Invalid input. (max >= min)";
        return 0;
    }

    while(getline(source, textline)){
        double score = stod(textline);
        if(score >= min && score <= max){
            count++;
        }
    }

    cout << "The number of students who have scores in this range = " << count;
    return 0;
}







