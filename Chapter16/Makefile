srcs=test.cpp

CC=g++  
CFLAG=-std=c++2a
objs=$(srcs:.cpp=.o)
prog=$(objs:.o=.exe)

Llib=${HOME}/lib
Iincl=${HOME}/strous/include

all: $(prog) 
	@echo "Done."


$(prog): $(objs)
	$(CC) $(CFLAG) -o $@  -L$(Llib)  $< -lstrous  -lfltk -lX11 -Wl,-rpath=$(Llib)
# -L/usr/local/lib
$(objs): $(srcs) 
	$(CC) $(CFLAG) -I/usr/local/include -I$(Iincl) -c $< 


clean:
	rm -f $(prog) *.o 

run:
	./$(prog)
