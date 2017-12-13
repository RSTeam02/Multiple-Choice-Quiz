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
    int playerScore;
public:    
    void setName(string name);
    void setScore(int score);
    string getName();
    int getScore();
};
#endif