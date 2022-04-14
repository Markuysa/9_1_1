#include "classes.h"

bool Triangle::Is_Exist(unsigned a, unsigned b, unsigned c){
	if (a >= b + c || b >= a + c || c >= a + b)
		return false;
	return true;
}

Triangle Triangle::operator+(Triangle second_triangle) {
	int a = second_triangle.a + this->a,b= second_triangle.b + this->b,c= second_triangle.c + this->c;
	if (Triangle::Is_Exist(a, b, c))
		return Triangle(a, b, c);
	else return *this;
}

Triangle Triangle::operator-(Triangle second_triangle) {
	int a = this->a-second_triangle.a, b = this->b- second_triangle.b, c =this->c- second_triangle.c;
	if (Triangle::Is_Exist(a, b, c))
		return Triangle(a, b, c);
	else return *this;
}
