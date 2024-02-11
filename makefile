TARGET=main
CC=clang
DEBUG=-g
OPT=-O0
WARN=-Wall -Wextra
CURSES=-lncurses
CCFLAGS=$(DEBUG) $(OPT) $(WARN)
OBJS=main.c
all: main.c
	$(CC) -o $(TARGET) $(OBJS) $(DEBUG) $(OPT) $(WARN) $(CURSES)
