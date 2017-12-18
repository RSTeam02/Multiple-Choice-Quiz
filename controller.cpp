#include "controller.h"

Controller::Controller(){
    Filereader fr;    
    fstream textFile;    
    textFile.open("quizfile.txt", ios::in);
    lines = fr.fileToline(textFile);    
    text2Arr = fr.lineTovect2d(lines);     
    question.resize(text2Arr.size());
   
}

char ynCheck(char input){
     while(toupper(input) != 'Y' && toupper(input) != 'N'){		
		cout<<"enter y or n, repeat input\n";
		cin.clear();
		cin.ignore();	
		cin>>input;
	}
    return toupper(input);
}

void Controller::start(){  
    bool re_start = true;
    char start = 'Y';  
    string name = "";
    do{
        for(int i = 0; i < text2Arr.size(); i++){
            question[i].setQas(text2Arr[i]); 
        }
        maxPts.clear();
        maxPts.resize(lines.size());        
        countMaxScorePts();
        p1.setScore(0);        
        cout<<"Enter your name: ";
        cin>>name;
        p1.setName(name);
        gameStart();
        cout<<"Restart a new game? (y/n)\n";
        cin>>start;
        start = ynCheck(start);
        re_start = (start == 'Y') ? true : false;   
    }while(re_start == true);
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
    char inputYN;
    char begin;
    char end = 'Z';
    string solution;
    bool qShuffle = false;
    bool aShuffle = false;
    cout<<"Shuffle questions order (y/n): ";
    cin>>inputYN;
    inputYN = ynCheck(inputYN);
    qShuffle = (inputYN == 'Y') ? true : false;      
    cout<<"Shuffle answer possibilities order of all questions (y/n): ";    
    cin>>inputYN;
    inputYN = ynCheck(inputYN);
    aShuffle = (inputYN == 'Y') ? true : false; 
    cout<<"max. achievable score for all questions: "<<maxScore<<"\n\n";
    //all questions     
    vector<int>shuffleQuestion = randomPos(lines.size(), qShuffle);
    for(vector<int>::size_type h = 0; h < lines.size(); h++){
        setIndex(shuffleQuestion[h]);
        question[index].setShuffle(aShuffle);
        //show question with answers, solutions
        cout<<nextQuestion()<<"\n";
        begin = 'A';
        
        for(int i = 0; i < nextAnswer().size(); i++){            
            cout<<begin<<": "<<nextAnswer()[i]<<"\n";
            begin++;
        }
        cout<<"max. achievable pts: "<<maxPts[index]<<"\n";           
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
                i--;
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
    result = pts * right - pts * wrong;
    if(result < 0){
        result = 0;
    }
    p1.addScore(result);
    cout<<p1.getName()<<" achieved "<<result<<"pts for this question\n"<<p1.getName()<<"'s score: "<<p1.getScore()<<"pts\n\n";
}

void Controller::countMaxScorePts(){
    maxScore = 0;
    for(vector<int>::size_type h = 0; h < lines.size(); h++){
        setIndex(h);
        for(int i = 0; i < nextAnswer().size(); i++){   
            maxPts[h] += ("+" == nextSolution()[i]) ? pts : 0;
        }
        maxScore += maxPts[h];
    }   
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
                cout<<"test";
            }
            begin++;
        }
        cout<<"\n";
    }
}
