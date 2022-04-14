#include "classes.h"
using namespace std;
int main() {
	unsigned number_of_triangles,a,b,c;
	cin >> number_of_triangles;
	vector<Triangle> Triangles_list;
	for (int i=0;i<number_of_triangles;i++) {
		cin >> a >> b >> c;
		Triangle temp_triangle(a, b, c);
		temp_triangle.set_number(i+1);
		Triangles_list.push_back(temp_triangle);
	}
	unsigned num1, num2;	
	char op1;
	while (cin >> num1 >> op1 >> num2) {
		switch (op1) {
		case '+':
			Triangles_list[num1 - 1] = Triangles_list[num1-1].operator+(Triangles_list[num2-1]);
			break;
		case '-':
			Triangles_list[num1 - 1] = Triangles_list[num1 - 1].operator-(Triangles_list[num2 - 1]);
			break;
		}
	}

	cout << "a = " << Triangles_list[num1 - 1].get_a() << "; b = " << Triangles_list[num1 - 1].get_b() << "; c = " << Triangles_list[num1 - 1].get_c();
}	