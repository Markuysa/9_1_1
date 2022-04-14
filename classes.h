#pragma once
#include <iostream>
#include <vector>
class Triangle {
private:
	unsigned number, a, b, c;
public:
	Triangle(unsigned a, unsigned b, unsigned c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	int get_a() { return this->a; }
	int get_b() { return this->b; }
	int get_c() { return this->c; }

	void set_number(unsigned number) { this->number = number; }
	bool Is_Exist(unsigned a, unsigned b, unsigned c);
	Triangle operator+(Triangle first_triangle);
	Triangle operator-(Triangle first_triangle);
};