CC=g++ -fPIC -std=c++2a 
link=g++ -std=c++2a

all: libstrous.so
	@echo "Done."



libstrous.so: Graph.o Window.o GUI.o Simple_window.o 
	$(link)  -shared -o $@ -L/usr/local/lib Graph.o Window.o GUI.o Simple_window.o  `fltk-config --ldflags --use-images` 


Graph.o: Graph.cpp Graph.h Point.h fltk.h std_lib_facilities.h 
	$(CC)  -I/usr/local/include -c Graph.cpp

Window.o: Window.cpp Window.h fltk.h std_lib_facilities.h Point.h Graph.h GUI.h
	$(CC)  -I/usr/local/include -c Window.cpp

GUI.o: GUI.cpp GUI.h Window.h fltk.h std_lib_facilities.h Point.h Graph.h  
	$(CC)  -I/usr/local/include -c GUI.cpp

Simple_window.o: Simple_window.cpp Simple_window.h GUI.h Window.h fltk.h std_lib_facilities.h Point.h Graph.h 
	$(CC)  -I/usr/local/include -c Simple_window.cpp

clean:
	rm -f libstrous.so *.o 
