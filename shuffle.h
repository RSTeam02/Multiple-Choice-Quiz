#ifndef SHUFFLE
#define SHUFFLE
#include<string>
#include<vector>
#include <ctime>
#include<iostream>
using namespace std;

class Shuffle{

protected:


public:
    vector<int> randomPos(int numOfElement, bool shuffle);
};    
#endif