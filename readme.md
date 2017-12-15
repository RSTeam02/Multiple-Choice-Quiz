# Multiple Choice Quizgame in C++

Progress:

+ main.cpp: start and test program from int main()
+ filereader class: read lines of quiz textfile and convert into 2d vector string
+ question class: seperate question, answer and solution possibilities => randomize positions 
+ player class: set/get name, score of a player

the test program shows the same question with answers and right solutions in different, random positions

usage with g++ compiler:
```
$ g++ main.cpp controller.cpp player.cpp filereader.cpp question.cpp -std=c++11 -o main
$ ./main
99 is equal to:
A: 11*9
B: 3*30+3²
C: 2*33

Solution:
A
B

Which color component(s) contain(s) the RGB color space?
A: green
B: blue
C: red
D: gray

Solution:
A
B
C

What is the meaning of "++" or "--"?
A: it adds/subtracts a variable by 2
B: it adds/subtracts a variable by 1
C: it's equal to x=x+2 or x=x-2
D: it's equal to x=x+1 or x=x-1
E: it is also known as increment or decrement operator

Solution:
B
D
E

What does the "%" operator in a programming language?
A: it calculates the remainder of a division
B: 1%100=1/100
C: it is also known as the "modulo" operator
D: 1%100=100
E: it is supposed to use for percentage calculation

Solution:
A
C
D


```
