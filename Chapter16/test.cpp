#include "Window.h"
#include "Graph.h"

double one(double){return 1;}

double slope(double x){ return x/2;}
double square(double x){return x * x;}

int main()
{ 
	using namespace Graph_lib; 
	Simple_window win {Point{100, 100}, xmax, ymax, "Function grphing"};
	
