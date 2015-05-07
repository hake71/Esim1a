CC=gcc
CFLAGS= -I -wall
EXE_NAME=Env
all: main.c operations.c operations.h
	$(CC) -o $(EXE_NAME) main.c operations.c operations.h $(CFLAGS)

