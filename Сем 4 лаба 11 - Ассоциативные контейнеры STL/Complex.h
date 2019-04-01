
#pragma once
#include <iostream>
#include <fstream> 


using namespace std;

class Complex
{
	double re;
	double im;
public:
	Complex();
	Complex(double x, double y);
	~Complex();
	Complex operator+(Complex B);
	Complex operator+(float B);
	Complex& operator+=(Complex& C);
	Complex operator*(Complex B);
	Complex operator*(double B);
	Complex operator-(Complex B);
	Complex& operator-=(Complex& C);
	Complex operator/(Complex B);
	Complex degree(Complex c, int n);
	Complex operator/(double B);
	Complex operator~();
	Complex operator^(int B);
	//Complex operator[](const int &c);
	//Complex operator!=(int B);
	double Re();
	double Re(double x) { re = x; };
	double Im();
	friend istream & operator>>(istream & is, Complex & c);
	friend ostream & operator<<(ostream & os, const Complex & c);
	int OutD();
	void sopr();
	int InD();
	friend bool operator< (const  Complex &a, const  Complex &b);
	friend bool operator <=(const Complex a, const Complex b);
	friend bool operator ==(const Complex a, const Complex b);
	friend bool operator >(const Complex a, const  Complex b);
	friend bool operator >=(const Complex a, const Complex b);
	bool operator()(Complex &a, Complex &b) const
	{
		return sqrt(pow(a.im, 2) + (a.re, 2)) < sqrt(pow(b.im, 2) + (b.re, 2));
	}
};
#pragma once
