#include "player.h"

void Player::setName(string name){
    playerName = name;
}

void Player::setScore(int score){
    playerScore = score;
}

int Player::getScore(){
    return playerScore;
}

string Player::getName(){
    return playerName;
}