#include<iostream>
#include "question.h"
#include "filereader.h"
#include "player.h"
#include<string>
#include "controller.h"
#include <stdio.h>
#include <ctype.h>
#include<vector>
#include<algorithm>
using namespace std;



void evalAnswer(string str, string input){
    int right = 0;
    int wrong = 0;

    for (int i =0; i<str.length(); i++){
        for (int j =0; j<str.length(); j++){
            if(str[i] == input[j]){
                right++;
            }
        }    
    }
    wrong = input.length() - right;
    cout<<right<<" answer(s) right, "<<wrong<<" answer(s) wrong\n";

}

//start main

int main(){    


    /*string str1= "abcd";
    string str2= "abcd";
    evalAnswer(str1,str2);*/
    Controller ctrl;
    ctrl.start();
    return 0;


}