#pragma once
#include <iostream>
#include <string>

//using namespace std;

class Punto {
	public:
		Punto(int x,int y) : 
			punto_x(x),punto_y(y){
		}
		void print() const {
			std::cout << "(" << punto_x << "," << punto_y << ")";
		}
		int get_x() {
			return punto_x;
		}
		int get_y() {
			return punto_y;
		}
	private :
		int punto_x;
		int punto_y;
};