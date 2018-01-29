#include <iostream>
#include <string>
using namespace std;

class A
{
	int A1;		// atributo int
	float A2;	// atributo float
	string A3;	// atributo string
	float soma;	// atributo para soma
	string Aramo4;	// atributo string aramo4
public:
	void setA1(int _A1);
	void setA2(float _A2);
	int getA1();
	float getA2();
	void setA3(string _A3);
	string getA3();
	float somaA1A2(A1, A2)
	void setAramo4(string _Aramo4);
	string getAramo4();
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

void A::setA3(string _A3) {
	A3 = _A3;
}

string A::getA3() {
	return A3;
}

float A::somaA1A2(A1, A2) {
	soma = A1 + A2;
	return soma;
}

void A::setAramo4(string _Aramo4) {
	Aramo4 = _Aramo4;
}

string A::getAramo4() {
	return Aramo4;
}
