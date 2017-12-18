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
    string playerName = "";
    double playerScore = 0;
public:    
    void setName(string name);
    void setScore(double score);
    void addScore(double score);
    string getName();
    double getScore();
};
#endif