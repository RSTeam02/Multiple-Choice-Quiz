# Multiple Choice Quizgame in C++

Progress:

18.12. enable, disable shuffling (question, answer order), enter player name, restart game (do - while loop) 

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
$ g++ main.cpp controller.cpp player.cpp filereader.cpp shuffle.cpp question.cpp -std=c++11 -o main
$ ./main
Enter your name: Jim
Shuffle questions order (y/n): y
Shuffle answer possibilities order of all questions (y/n): y
max. achievable score for all questions: 3.75

99 is equal to:
A: 2*33
B: 3*30+3²
C: 11*9
max. achievable pts: 0.5
abc

Solution:
B
C

2 answer(s) right, 1 answer(s) wrong
Jim achieved 0.25pts for this question
Jim's score: 0.25pts

Which color component(s) contain(s) the RGB color space?
A: grey
B: ruby
C: red
D: blue
E: rose
F: green
max. achievable pts: 0.75
cdf

Solution:
C
D
F

3 answer(s) right, 0 answer(s) wrong
Jim achieved 0.75pts for this question
Jim's score: 1pts

What do you know about the C-Language?
A: it was developed by Dennis Ritchie
B: it's an imperative programming language
C: it's a programming language with object orientation
D: it was developed by Bjarne Stroustrup
E: the successor of C is the D language
F: the "hello world" program gains popularity within the C-language
G: C is nowadays still used for OS-Development
max. achievable pts: 1
gfdb

Solution:
A
B
F
G

3 answer(s) right, 1 answer(s) wrong
Jim achieved 0.5pts for this question
Jim's score: 1.5pts

What is the meaning of "x++"/"x--"?
A: it is also known as increment/decrement operator
B: it adds/subtracts x by 2
C: it's equal to x=x+2/x=x-2
D: it's equal to x=x+1/x=x-1
E: it adds/subtracts x by 1
max. achievable pts: 0.75
ade

Solution:
A
D
E

3 answer(s) right, 0 answer(s) wrong
Jim achieved 0.75pts for this question
Jim's score: 2.25pts

What does the "%" operator in a programming language?
A: 1%100=1/100
B: it calculates the remainder of a division
C: 1%100=100
D: it is supposed to use for percentage calculation
E: it is also known as the "modulo" operator
max. achievable pts: 0.75
ecb

Solution:
B
C
E

3 answer(s) right, 0 answer(s) wrong
Jim achieved 0.75pts for this question
Jim's score: 3pts

Restart a new game? (y/n)
y
Enter your name: Joe
Shuffle questions order (y/n): n
Shuffle answer possibilities order of all questions (y/n): y
max. achievable score for all questions: 3.75

99 is equal to:
A: 2*33
B: 11*9
C: 3*30+3²
max. achievable pts: 1
cb

Solution:
B
C

2 answer(s) right, 0 answer(s) wrong
Joe achieved 0.5pts for this question
Joe's score: 0.5pts

Which color component(s) contain(s) the RGB color space?
A: red
B: rose
C: grey
D: green
E: ruby
F: blue
max. achievable pts: 1.5
adf

Solution:
A
D
F

3 answer(s) right, 0 answer(s) wrong
Joe achieved 0.75pts for this question
Joe's score: 1.25pts

What is the meaning of "x++"/"x--"?
A: it adds/subtracts x by 2
B: it's equal to x=x+2/x=x-2
C: it's equal to x=x+1/x=x-1
D: it adds/subtracts x by 1
E: it is also known as increment/decrement operator
max. achievable pts: 1.5
dea

Solution:
C
D
E

2 answer(s) right, 1 answer(s) wrong
Joe achieved 0.25pts for this question
Joe's score: 1.5pts

What do you know about the C-Language?
A: the "hello world" program gains popularity within the C-language
B: it's an imperative programming language
C: the successor of C is the D language
D: C is nowadays still used for OS-Development
E: it was developed by Dennis Ritchie
F: it was developed by Bjarne Stroustrup
G: it's a programming language with object orientation
max. achievable pts: 2
abcde

Solution:
A
B
D
E

4 answer(s) right, 1 answer(s) wrong
Joe achieved 0.75pts for this question
Joe's score: 2.25pts

What does the "%" operator in a programming language?
A: 1%100=1/100
B: it is also known as the "modulo" operator
C: it calculates the remainder of a division
D: it is supposed to use for percentage calculation
E: 1%100=100
max. achievable pts: 1.5
bec

Solution:
B
C
E

3 answer(s) right, 0 answer(s) wrong
Joe achieved 0.75pts for this question
Joe's score: 3pts

Restart a new game? (y/n)
n
```
