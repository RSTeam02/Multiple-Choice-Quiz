#include "question.h"


void Question::setQas(vector<string>& q){
    qas = q;
}


//first column is always the question (qas[0])
string Question::getQuestion(){
    question = qas[0];
    return question;
}

//every question could contain variable size of answer, solution possibilities
void Question::answerSize(){
    size_t newsize = 0;
    for(int i =0; i < qas.size(); i++){
        if(qas[i].length() == 1){
            newsize++;
        }
    }
    numOfAnswer = newsize;
}
void Question::setShuffle(bool s){
    shuffle = s;
}
vector<string>Question::getAnswer(){    
    answerSize();
    shuffleAnswer = randomPos(numOfAnswer, shuffle);
  
    vector<string> answer(numOfAnswer);
    for(int i =0; i < numOfAnswer; i++){        
        answer[i] = qas[shuffleAnswer[i]+1];        
    }
    return answer;
}

vector<string>Question::getSolution(){
    vector<string> solution(numOfAnswer);  
    for(int i =0; i < numOfAnswer; i++){        
        solution[i] = qas[(shuffleAnswer[i]+numOfAnswer)+1];              
    }

    return solution;
}