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
Which color component(s) contain(s) the RGB color space?
A: red
B: gray
C: green
D: blue

Solution:
A
C
D
$ ./main
Which color component(s) contain(s) the RGB color space?
A: gray
B: blue
C: red
D: green

Solution:
B
C
D
$ ./main
Which color component(s) contain(s) the RGB color space?
A: red
B: green
C: blue
D: gray

Solution:
A
B
C
$ ./main
Which color component(s) contain(s) the RGB color space?
A: blue
B: gray
C: green
D: red

Solution:
A
C
D


```
