#include "controller.h"

Controller::Controller(){
    Filereader fr;
    Player p1;
    fstream textFile;    
    textFile.open("quizfile.txt", ios::in);
    lines = fr.fileToline(textFile);
    text2Arr = fr.lineTovect2d(lines);     
    question.resize(text2Arr.size());
 
}


void Controller::start(){    
    for(int i = 0; i < text2Arr.size(); i++){
        question[i].setQas(text2Arr[i]); 
    }    
}

vector<int>::size_type Controller::getNumOfLines(){
    return lines.size();
} 

void Controller::setIndex(int idx){
    index = idx;
}

string Controller::nextQuestion(){
    return question[index].getQuestion();
}

vector<string> Controller::nextAnswer(){
    return question[index].getAnswer();
}

vector<string> Controller::nextSolution(){
    return question[index].getSolution();
}
