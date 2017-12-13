#include "question.h"


void Question::setQuestion(vector<string>& q){
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

//set answer, solution possibilities in random position
void Question::randomPos(){
    srand(time(0));    
    vector<int>numVector(numOfAnswer);

    for(int i = 0; i < numOfAnswer; i++){
        numVector[i] = i;
    } 
    for(int i = (numOfAnswer -1); i >= 0; i--){
        int j = (rand()%(i+1));
        int tmp = numVector[i];
        numVector[i] = numVector[j];
        numVector[j] = tmp;
    }
    answerPos = numVector;
}

vector<string>Question::getAnswer(){    
    answerSize();
    randomPos();
    vector<string> answer(numOfAnswer);
    for(int i =0; i < numOfAnswer; i++){        
        answer[i] = qas[answerPos[i]+1];        
    }
    return answer;
}

vector<string>Question::getSolution(){
    vector<string> solution(numOfAnswer);  
    for(int i =0; i < numOfAnswer; i++){        
        solution[i] = qas[(answerPos[i]+numOfAnswer)+1];              
    }

    return solution;
}