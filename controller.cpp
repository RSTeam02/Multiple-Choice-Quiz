#include "controller.h"

Controller::Controller(){
    Filereader fr;    
    p1.setName("Player1");
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
    //showAll();
    gameStart();
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

void Controller::gameStart(){    
    string input;
    char begin;
    char end = 'Z';
    string solution;
    
    //all questions
    for(vector<int>::size_type h = 0; h < lines.size(); h++){
        setIndex(h);
        //show question with answers, solutions
        cout<<nextQuestion()<<"\n";
        begin = 'A';
        for(int i = 0; i < nextAnswer().size(); i++){    
            cout<<begin<<": "<<nextAnswer()[i]<<"\n";
            begin++;
        }        
        cin>>input;
        
        begin = 'A'; 
        solution="";
        cout<<"\nSolution:\n";
        for(int i = 0; i < nextSolution().size(); i++){
            //"+" is right, "-" is wrong answer, see quizFile                         
            if("+" == nextSolution()[i]){
                cout<<begin<<"\n";
                solution += begin;                          
            }          
            begin++;
        }
        cout<<"\n";
        checkAnswer(input, solution);
    }
}

void Controller::checkAnswer(string input, string solution){
    string upper ="";
    double result =0;   
    //remove duplicates e.g. aaababcc => abc
    for(int i = 0; i < input.size()-1; i++){
        for(int j = i+1; j < input.size(); j++){
            if(input[i] == input[j]){               
                input.erase(i,1);
                j--;                
            }
        }
    }
    for(char &c : input){
        upper += toupper(c);
    }
    int right = 0;
    int wrong = 0;
    for (int i =0; i<solution.length(); i++){
        for (int j =0; j<upper.length(); j++){
            if(solution[i] == upper[j]){
                right++;
            }
        }    
    }
    wrong = input.length() - right;
    cout<<right<<" answer(s) right, "<<wrong<<" answer(s) wrong\n";
    result = .25 * right - .25 * wrong;
    if(result < 0){
        result = 0;
    }
    p1.setScore(result);
    cout<<p1.getName()<<" gained "<<result<<"pts for this question\n"<<p1.getName()<<"'s score: "<<p1.getScore()<<"pts\n\n";
}


void Controller::showAll(){
    char begin;
    char end = 'Z';
    //all questions
    for(vector<int>::size_type h = 0; h < lines.size(); h++){
        setIndex(h);
        //show question with answers, solutions
        cout<<nextQuestion()<<"\n";
        begin = 'A';
        for(int i = 0; i < nextAnswer().size(); i++){    
            cout<<begin<<": "<<nextAnswer()[i]<<"\n";
            begin++;
        }

        begin = 'A'; 
        cout<<"\nSolution:\n";
        for(int i = 0; i < nextSolution().size(); i++){
            //"+" is right, "-" is wrong answer, see quizFile        
            if("+" == nextSolution()[i]){
                cout<<begin<<"\n";
            }
            begin++;
        }
        cout<<"\n";
    }
}
