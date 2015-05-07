CC= gcc
CFLAGS= -Wall -I.
EXE_NAME=Env
FILES= main.o operations.o
INCLUDE = operations.h

all: $(FILES) $(INCLUDE)
	$(CC) -o $(EXE_NAME) $(FILES)  $(CFLAGS)

clean:
	rm -f *.o
	
rebuild: clean all
