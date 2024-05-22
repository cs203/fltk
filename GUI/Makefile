CC=g++ -fPIC -std=c++2a 
link=g++ -std=c++2a
Iincl=/usr/local/include

all: libstrous.so
	@echo "Done."



libstrous.so: Graph.o Window.o GUI.o Simple_window.o 
	$(link)  -shared -o $@ -L/usr/local/lib $^  `fltk-config --ldflags --use-images` 


Graph.o: Graph.cpp Graph.h Point.h fltk.h std_lib_facilities.h 
	$(CC)  -I$(Iincl) -c $< 

Window.o: Window.cpp Window.h fltk.h std_lib_facilities.h Point.h Graph.h GUI.h
	$(CC)  -I$(Iincl) -c $< 

GUI.o: GUI.cpp GUI.h Window.h fltk.h std_lib_facilities.h Point.h Graph.h  
	$(CC)  -I$(Iincl) -c $< 

Simple_window.o: Simple_window.cpp Simple_window.h GUI.h Window.h fltk.h std_lib_facilities.h Point.h Graph.h 
	$(CC)  -I$(Iincl) -c $< 

clean:
	rm -f libstrous.so *.o 
