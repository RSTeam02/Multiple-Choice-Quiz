#ifndef CTRL
#define CTRL
#include<vector>
#include<algorithm>
#include<iostream>
#include<fstream>
#include<string>
#include "question.h"
#include "filereader.h"
#include "player.h"
using namespace std;

/**
* @sakaijun
* Controller class 
* + use of question, player, filereader classes, test outputs
*
*/

class Controller{
protected:
    fstream tFile;
    int index;   
    Player p1;
    vector<string>lines;
    vector<Question> question;
    vector<vector<string>>text2Arr;
public:
    Controller();
    void start();
    void setIndex(int idx);
    void showAll();   
    string nextQuestion();
    void gameStart();
    void checkAnswer(string input, string solution);
    vector<string> nextAnswer();
    vector<string> nextSolution();
  
};
#endif