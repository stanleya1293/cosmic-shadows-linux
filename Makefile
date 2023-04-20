CC = g++
CFLAGS = -Wall -Wextra 

all: Game.o
	$(CC) $(CFLAGS) -o bin/Cosmic_shadows bin/Engine.o bin/main.o -I usr/include -L usr/lib/x86_64-linux-gnu -lSDL2 -lSDL2main -lSDL2_image

Game.o: Engine.o main.o
	$(CC) $(CFLAGS) -o bin/Game.o -c bin/Engine.o bin/main.o

Engine.o:
	$(CC) $(CFLAGS) -o bin/Engine.o -c engine/GameWindow.cpp

main.o:
	$(CC) $(CFLAGS) -o bin/main.o -c src/main.cpp

clean:
	$(RM) *~
