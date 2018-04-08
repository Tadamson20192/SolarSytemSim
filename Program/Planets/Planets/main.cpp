
#include "vector.h"


int main(void) {

	vector vec1(1.0f, 0.5f, 2.0f);
	vector vec2(1.0f, 2.0f, 3.0f);

	vec1 = vector::cross(vec1, vec2);
	vec1.printVector();
	

}