#include "pch.h"
#include "Complex.h" 


Complex::Complex()//�����������
{
	re = 0;
	im = 0;
}


Complex::~Complex()//����������
{
}

Complex::Complex(double x, double y)//�����������
{
	re = x;
	im = y;
}

Complex Complex::operator~()
{
	return Complex(this->re, (-1)*this->im);
}


Complex Complex::degree(Complex C, int n)
{
	C.re = pow(C.re, n);
	C.im = pow(C.im, n);
	return C;
}


double Complex::Re()
{
	// TODO: �������� ���� ��� ����������.
	return re;
}

double Complex::Im()
{
	// TODO: �������� ���� ��� ����������.
	return im;
}

//Complex Complex::operator[](const int &c)
//{
//	if (c >= 0 || c < n) return (A[i]);
//	else 
//	
//		return T(0);
//}

Complex Complex::operator+(Complex B)//����� �����������
{
	return Complex(re + B.re, im + B.im);
}



Complex Complex::operator*(Complex B)//������������ ����������
{
	Complex X;
	X.re = (re*B.re) - (im*B.im);
	X.im = (re*B.im) + (B.re*im);
	return X;
}

Complex Complex::operator+(float B)//�������� � ����������� 
{
	Complex X;
	X.re = X.re + B;
	return X;
}




int Complex::OutD()//����� ������������ 
{
	std::cout << re;
	if (im > 0) std::cout << "+";
	if (im != 0) std::cout << im << "i\n";
	return 0;
}

int Complex::InD()//���� ������������ 
{
	std::cout << "\nReal = ";
	std::cin >> re;
	std::cout << "Image = ";
	std::cin >> im;
	return 0;
}

Complex Complex::operator-(Complex y)//�������� ����������� 
{
	Complex x;
	x.re = re - y.re;
	x.im = im - y.im;
	return x;
}

Complex& Complex::operator-=(Complex& C)//�������� ����������� 
{
	re -= C.re;
	im -= C.im;
	return *this;
}


Complex& Complex::operator+=(Complex& C)//����� ����������� 
{
	re += C.re;
	im += C.im;
	return *this;
}




Complex Complex::operator/(Complex y)//������� ������������ �� �����������
{
	Complex x;
	x.re = ((re*y.re) + (im*y.im)) / ((y.re*y.re) + (y.im*y.im));
	x.im = ((im*y.re) - (re*y.im)) / ((y.re*y.re) + (y.im*y.im));
	return x;
}

Complex Complex::operator/(double y)//������� ������������ �� ������������
{
	Complex x;
	x.re = (re*y) / (y*y);
	x.im = (im*y) / (y*y);
	return x;
}

Complex Complex::operator*(double B) // ��������� ������������ �� ������������
{
	Complex X;
	X.re = re * B;
	X.im = im * B;
	return X;
}

Complex Complex::operator^(int B) // ���������� ������������ � �������
{
	Complex X;
	X.re = re;
	X.im = im;
	while (B != 1)
	{
		X.re *= re;
		X.im *= im;
		B--;
	}
	return X;
}



ostream & operator<<(ostream & os, const Complex & c)
{
	os << c.re;
	if (c.im > 0) {
		if (c.im == 1) {
			os << " + i";
		}
		else {
			os << " + " << c.im << "i";
		}
	}
	if (c.im < 0) {
		if (c.im == -1) {
			os << " - i";
		}
		else
		{
			os << " - " << -c.im << "i";
		}
	}
	return os;
}

//
//Complex Complex::operator!=(int t)
//{
//	os << "complex number is " << c.re;
//	if (c.im > 0) os << " + ";
//	if (c.im != 0) os << c.im << "i";
//	return os;
//}


istream & operator>>(istream & is, Complex& c)
{
	cout << "Enter complex number: ";
	is >> c.re;
	cout << " + ";
	is >> c.im;
	if (c.im != 1) cout << "i.";
	return is;
}

void Complex::sopr()
{
	std::cout << "Sopr complex:\t";
	std::cout << re;
	if (im > 0)
	{
		im = im * (-1);
	}
	else
	{
		im = im * (-1);
		std::cout << "+";
	}
	if (im != 0) std::cout << im << "i\n";
}

bool operator< (const Complex &a, const Complex &b)
{
	return sqrt(pow(a.im, 2) + pow(a.re, 2)) < sqrt(pow(b.im, 2) + pow(b.re, 2));
}


bool operator <=(const Complex a, const Complex b)
{
	return sqrt(pow(a.im, 2) + pow(a.re, 2)) <= sqrt(pow(b.im, 2) + pow(b.re, 2));
}
bool operator >=(const Complex a, const Complex b)
{
	return sqrt(pow(a.im, 2) + pow(a.re, 2)) >= sqrt(pow(b.im, 2) + pow(b.re, 2));
}
bool operator ==(const Complex a, const Complex b)
{
	return sqrt(pow(a.im, 2) + pow(a.re, 2)) == sqrt(pow(b.im, 2) + pow(b.re, 2));
}
bool operator >(const Complex a, const Complex b)
{
	return sqrt(pow(a.im, 2) + pow(a.re, 2)) > sqrt(pow(b.im, 2) + pow(b.re, 2));
}