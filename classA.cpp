#include <iostream>
using namespace std;

class A
{
	int A1;     // atributo int
	float A2;    // atributo float
public:
	void setA1(int _A1);
	void setA2(float _A2);
	int getA1();
	float getA2();
};

void A::setA1(int _A1) {
	A1 = _A1;
}

void A::setA2(float _A2) {
	A2 = _A2;
}

int A::getA1() {
	return A1;
}

float A::getA2() {
	return A2;
}
