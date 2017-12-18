#include "shuffle.h"

//random int output without repeat as vector
vector<int>Shuffle::randomPos(int numOfElement, bool shuffle){
    srand(time(0));    
    vector<int>numVector(numOfElement);

    for(int i = 0; i < numOfElement; i++){
        numVector[i] = i;
    } 
    if(shuffle){
        for(int i = (numOfElement -1); i >= 0; i--){
            int j = (rand()%(i+1));
            int tmp = numVector[i];
            numVector[i] = numVector[j];
            numVector[j] = tmp;
        }
    }
    return numVector;
}