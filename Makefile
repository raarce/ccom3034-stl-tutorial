all: stlTutorial

stlTutorial: stlTutorial.o
	g++ -o stlTutorial stlTutorial.o

stlTutorial.o: stlTutorial.cpp Article.h
	g++ -c stlTutorial.cpp