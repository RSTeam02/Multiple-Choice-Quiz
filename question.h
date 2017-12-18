#ifndef QUESTION
#define QUESTION
#include<string>
#include<vector>
#include <ctime>
#include<iostream>
#include "shuffle.h"
using namespace std;

/**
* @sakaijun
* Question class 
* + set question from filereader converter
* + seperate question, answer, solution
*
*/

class Question : public Shuffle{
protected:
    //questionAnswerSolution = qas
    size_t numOfAnswer;
    vector<int>shuffleAnswer;    
    vector<string>qas;
    string question;
    bool shuffle = false;
public:    
    void setQas(vector<string>& q); 
    void answerSize();
    void setShuffle(bool s);
    string getQuestion();
    //void randomPos();
    vector<string>getAnswer();    
    vector<string>getSolution();
};
#endif