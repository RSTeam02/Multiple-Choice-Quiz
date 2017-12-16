#ifndef PLAYER
#define PLAYER
#include <string>
using namespace std;

/**
* @sakaijun
* Player class 
* + get/set player name and score
*
*/

class Player{
protected:
    string playerName;
    double playerScore;
public:    
    void setName(string name);
    void setScore(double score);
    string getName();
    double getScore();
};
#endif