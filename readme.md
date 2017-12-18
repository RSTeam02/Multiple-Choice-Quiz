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
Shuffle questions order (y/n): n
Shuffle answer possibilities order of all questions (y/n): y
max. achievable score for all questions: 3.75

99 is equal to:
A: 3*30+3²
B: 11*9
C: 2*33
max. achievable pts: 0.5
ba

Solution:
A
B

2 answer(s) right, 0 answer(s) wrong
Jim achieved 0.5pts for this question
Jim's score: 0.5pts

Which color component(s) contain(s) the RGB color space?
A: red
B: ruby
C: green
D: grey
E: blue
F: rose
max. achievable pts: 0.75
ace

Solution:
A
C
E

3 answer(s) right, 0 answer(s) wrong
Jim achieved 0.75pts for this question
Jim's score: 1.25pts

What is the meaning of "x++"/"x--"?
A: it's equal to x=x+2/x=x-2
B: it's equal to x=x+1/x=x-1
C: it adds/subtracts x by 2
D: it adds/subtracts x by 1
E: it is also known as increment/decrement operator
max. achievable pts: 0.75
bde

Solution:
B
D
E

3 answer(s) right, 0 answer(s) wrong
Jim achieved 0.75pts for this question
Jim's score: 2pts

What do you know about the C-Language?
A: it's a programming language with object orientation
B: it was developed by Bjarne Stroustrup
C: it was developed by Dennis Ritchie
D: it's an imperative programming language
E: the successor of C is the D language
F: the "hello world" program gains popularity within the C-language
G: C is nowadays still used for OS-Development
max. achievable pts: 1
bdfg

Solution:
C
D
F
G

3 answer(s) right, 1 answer(s) wrong
Jim achieved 0.5pts for this question
Jim's score: 2.5pts

What does the "%" operator in a programming language?
A: it is supposed to use for percentage calculation
B: 1%100=100
C: it calculates the remainder of a division
D: 1%100=1/100
E: it is also known as the "modulo" operator
max. achievable pts: 0.75
cbe

Solution:
B
C
E

3 answer(s) right, 0 answer(s) wrong
Jim achieved 0.75pts for this question
Jim's score: 3.25pts

Restart a new game? (y/n)
Y
Enter your name: Joe
Shuffle questions order (y/n): y
Shuffle answer possibilities order of all questions (y/n): y
max. achievable score for all questions: 3.75

Which color component(s) contain(s) the RGB color space?
A: grey
B: red
C: ruby
D: rose
E: blue
F: green
max. achievable pts: 0.75
cfe

Solution:
B
E
F

2 answer(s) right, 1 answer(s) wrong
Joe achieved 0.25pts for this question
Joe's score: 0.25pts

99 is equal to:
A: 3*30+3²
B: 11*9
C: 2*33
max. achievable pts: 0.5
ab

Solution:
A
B

2 answer(s) right, 0 answer(s) wrong
Joe achieved 0.5pts for this question
Joe's score: 0.75pts

What does the "%" operator in a programming language?
A: it is also known as the "modulo" operator
B: it calculates the remainder of a division
C: 1%100=100
D: it is supposed to use for percentage calculation
E: 1%100=1/100
max. achievable pts: 0.75
abc

Solution:
A
B
C

3 answer(s) right, 0 answer(s) wrong
Joe achieved 0.75pts for this question
Joe's score: 1.5pts

What do you know about the C-Language?
A: it's an imperative programming language
B: it was developed by Bjarne Stroustrup
C: the successor of C is the D language
D: it was developed by Dennis Ritchie
E: the "hello world" program gains popularity within the C-language
F: it's a programming language with object orientation
G: C is nowadays still used for OS-Development
max. achievable pts: 1
adeg

Solution:
A
D
E
G

4 answer(s) right, 0 answer(s) wrong
Joe achieved 1pts for this question
Joe's score: 2.5pts

What is the meaning of "x++"/"x--"?
A: it adds/subtracts x by 2
B: it is also known as increment/decrement operator
C: it adds/subtracts x by 1
D: it's equal to x=x+2/x=x-2
E: it's equal to x=x+1/x=x-1
max. achievable pts: 0.75
be

Solution:
B
C
E

2 answer(s) right, 0 answer(s) wrong
Joe achieved 0.5pts for this question
Joe's score: 3pts

Restart a new game? (y/n)
n

```
