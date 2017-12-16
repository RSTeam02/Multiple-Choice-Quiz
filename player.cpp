#include "player.h"

void Player::setName(string name){
    playerName = name;
}

void Player::setScore(double score){
    playerScore += score;
}

double Player::getScore(){
    return playerScore;
}

string Player::getName(){
    return playerName;
}