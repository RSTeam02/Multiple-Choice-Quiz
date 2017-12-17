# Multiple Choice Quizgame in C++

Progress:

17.12. show achievable max. points each question and maximum achievable score of all questions

17.12. remove duplicates e.g. aaababcc => abc to prevent cheating

16.12. answer checking:
+ multiple choice user input: enter chars without commas (e.g. abc) 
+ compare every entered char with every char of the solution, there is no need to enter the chars in alphabetical order. e.g. abc is equal to cAb (case insensitive)  

16.12. point system: 
+ right answer: 0,25pts
+ wrong checked answer: -0,25pts
+ non-checked: 0pts 
+ no negative points if wrong checked answer(s) < right checked answer(s)

13.12. convert file to questions:
+ main.cpp: start and test program from int main()
+ filereader class: read lines of quiz textfile and convert into 2d vector string
+ question class: seperate question, answer and solution possibilities => randomize positions 
+ player class: set/get name, score of a player

usage with g++ compiler:
```
$ g++ main.cpp controller.cpp player.cpp filereader.cpp question.cpp -std=c++11 -o main
$ ./main
max. achievable score for all questions: 2.75

99 is equal to:
A: 2*33
B: 3*30+3²
C: 11*9
max. achievable pts: 0.5
ca

Solution:
B
C

1 answer(s) right, 1 answer(s) wrong
Player1 achieved 0pts for this question
Player1's score: 0pts

Which color component(s) contain(s) the RGB color space?
A: grey
B: green
C: blue
D: red
max. achievable pts: 0.75
cdb

Solution:
B
C
D

3 answer(s) right, 0 answer(s) wrong
Player1 achieved 0.75pts for this question
Player1's score: 0.75pts

What is the meaning of "x++"/"x--"?
A: it's equal to x=x+1/x=x-1
B: it is also known as increment/decrement operator
C: it's equal to x=x+2/x=x-2
D: it adds/subtracts x by 2
E: it adds/subtracts x by 1
max. achievable pts: 0.75
eba

Solution:
A
B
E

3 answer(s) right, 0 answer(s) wrong
Player1 achieved 0.75pts for this question
Player1's score: 1.5pts

What does the "%" operator in a programming language?
A: 1%100=1/100
B: it calculates the remainder of a division
C: it is supposed to use for percentage calculation
D: it is also known as the "modulo" operator
E: 1%100=100
max. achievable pts: 0.75
deb

Solution:
B
D
E

3 answer(s) right, 0 answer(s) wrong
Player1 achieved 0.75pts for this question
Player1's score: 2.25pts


```
