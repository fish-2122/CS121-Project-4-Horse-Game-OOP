game: Horse.o Race.o main.o
	g++ -g Horse.o Race.o main.o -o game

main.o: Horse.h Race.h main.cpp
	g++ -c -g main.cpp

Horse.o: Horse.h Horse.cpp
	g++ -c -g Horse.cpp

Race.o: Horse.h Race.h Race.cpp
	g++ -c -g Race.cpp
	
clean:
	rm *.o
	rm game

run: game
	./game
