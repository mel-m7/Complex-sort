#pragma once
#include <iostream>
#include <vector>
#include <cmath>

class Complex {
	double real;
	double imag;
public:
	Complex() {}
	Complex(double real, double imag)
		:real(real)
		, imag(imag) {}
	~Complex() {}

	Complex operator+(const Complex& a) {
		Complex c;
		c.real = a.real + this->real;
		c.imag = a.imag + this->imag;
		return c;
	}

	Complex operator-(const Complex& a) {
		Complex c;
		c.real = a.real - this->real;
		c.imag = a.imag - this->imag;
		return c;
	}

	Complex operator*(const double& a) {
		Complex c;
		c.real = a - this->real;
		c.imag = a - this->imag;
		return c;
	}

	double complexAbs() {
		double cAbs = sqrt(this->real * this->real + this->imag * this->imag);
		return cAbs;
	}

	void swap(Complex& xp)
	{
		Complex temp = xp;
		xp.real = this->real;
		xp.imag = this->imag;
		this->real = temp.real;
		this->imag = temp.imag;
	}

	void printInfo() {
		std::cout << this->real << " + " << this->imag << "i\n";
	}
};
