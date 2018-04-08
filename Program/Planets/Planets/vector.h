#ifndef vector_H
#define vector_H

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

#include <cmath>

using namespace std;

class vector {

public:
	float x, y, z;

	vector(float in_x, float in_y, float in_z) : x(in_x), y(in_y), z(in_z) {
	
	
	
	}


	void scale(float scalar) {
		x *= scalar;
		y *= scalar;
		z *= scalar;	
	}
	
	static vector cross(vector vec1, vector vec2) {
		float outX = (vec1.y * vec2.z) - (vec1.z * vec2.y);
		float outY = (vec1.x * vec2.z) - (vec1.z * vec2.x);
		float outZ = (vec1.x * vec2.y) - (vec1.y * vec2.x);
		return vector(outX, outY, outZ);
	}

	static vector subtract(vector vec1, vector vec2) {
		float outX = vec1.x - vec2.x;
		float outY = vec1.y - vec2.y;
		float outZ = vec1.z - vec2.z;
		return vector(outX, outY, outZ);
	}

	static vector add(vector vec1, vector vec2) {
		float outX = vec1.x + vec2.x;
		float outY = vec1.y + vec2.y;
		float outZ = vec1.z + vec2.z;
		return vector(outX, outY, outZ);
	}

	void printVector() {
		ofstream myfile;
		myfile.open("output.txt");
		myfile << "X: " << x ;
		myfile << "\nY: " << y;
		myfile << "\nZ: " << z;
		myfile.close();
	}





};




#endif