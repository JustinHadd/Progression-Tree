#
#	Makefile by
#
#      Justin Haddock
#

CC = g++
CFLAGS = -c -Wall -Wextra

TARGET = progression_tree


all: $(TARGET)


$(TARGET): main.o tree.o
	$(CC) -g -Wextra -Wall -o $(TARGET) main.o tree.o


Tree.o: Tree.cpp Tree.h Event.h
	$(CC) $(CFLAGS) Tree.cpp


main.o: main.cpp Tree.h Event.h
	$(CC) $(CFLAGS) main.cpp

clean:
	$(RM) $(TARGET) *.o *~