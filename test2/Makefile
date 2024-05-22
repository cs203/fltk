CC=g++  
CFLAG=-std=c++2a
EXE_NAME=hello_fltk

all: main
	@echo "Done."


main: main.o
	$(CC) $(CFLAG) -o $(EXE_NAME)  -L/home/vadim/lib  main.o -lstrous  -lfltk -lX11 -Wl,-rpath=/home/vadim/lib
# -L/usr/local/lib
main.o: main.cpp 
	$(CC) $(CFLAG) -I/usr/local/include -I/home/vadim/strous/include -c main.cpp


clean:
	rm -f $(EXE_NAME) *.o 

run:
	./$(EXE_NAME)
