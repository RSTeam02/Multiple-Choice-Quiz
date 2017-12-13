#ifndef QUESTION
#define QUESTION
#include<string>
#include<vector>
#include <ctime>
#include<iostream>
using namespace std;

/**
* @sakaijun
* Question class 
* + set question from filereader converter
* + seperate question, answer, solution
*
*/

class Question{
protected:
    //questionAnswerSolution = qas
    size_t numOfAnswer;
    vector<int>answerPos;    
    vector<string>qas;
    string question;
public:    
    void setQuestion(vector<string>& q);
    void answerSize();
    string getQuestion();
    void randomPos();
    vector<string>getAnswer();
    vector<string>getSolution();
};
#endif