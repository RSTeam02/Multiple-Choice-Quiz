#ifndef F_READER
#define F_READER
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

/**
* @sakaijun
* Filereader class 
* split by delimiter "," question, answers, solution(s), store in 2d-vector
*
*/


class Filereader{

public:
    vector<string>fileToline(fstream& textFile);
    vector<vector<string>>lineTovect2d(vector<string> lines);
};
#endif
