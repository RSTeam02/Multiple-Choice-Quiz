#include<iostream>
#include "question.h"
#include "filereader.h"
#include "player.h"
#include "controller.h"


using namespace std;

//start main

int main(){    
    char begin;
    char end = 'Z';
    Controller ctrl;
    ctrl.start();
    //choose question
    ctrl.setIndex(1);
    //show question with answers, solutions
    cout<<ctrl.nextQuestion()<<"\n";
    begin = 'A';
    for(int i = 0; i < ctrl.nextAnswer().size(); i++){    
        cout<<begin<<": "<<ctrl.nextAnswer()[i]<<"\n";
        begin++;
    }

    begin = 'A'; 
    cout<<"\nSolution:\n";
    for(int i = 0; i < ctrl.nextSolution().size(); i++){
        //"+" is right, "-" is wrong answer, see quizFile        
        if("+" == ctrl.nextSolution()[i]){
            cout<<begin<<"\n";
        }
        begin++;
    } 
   
    return 0;


}