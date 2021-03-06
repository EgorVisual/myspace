#include "pch.h"
#include "Complex.h" 
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>   
#include <math.h> 
#define next "\n"


using namespace std;

int main(void)
{
	const Complex A(3, 6), B(1, 2), C(5, 9), I(2, 4), R(7, 4), P(9, 8), N(1, 4);
	const Complex init[] = { A, B, C, I, R };
	map<int,Complex> associate, swa;
	swa[34] = P;
	swa[8] = P;
	for (int m = 0; m <= 4; m++)
	{
		associate[m] = init[m];
	}
	std::cout << "swa contains:\n";
	for (auto it : swa) cout << "[ " << it.first << ", " << it.second << "]\n";
	std::cout << "associate contains:\n";
	for (auto it : associate) cout << "[ " << it.first << ", " << it.second << "]\n";
	swa.swap(associate);
	std::cout << "swa contains:\n";
	for (auto it : swa) cout << "[ " << it.first << ", " << it.second << "]\n";
	std::cout << "associate contains:\n";
	for (auto it : associate) cout << "[ " << it.first << ", " << it.second << "]\n";
	map<int, Complex>::iterator It;
	It = swa.find(3);
	if (It != swa.end())
		swa.erase(It);
	cout << "Elements in Swa Map:\n";
	for (auto it : swa) cout << "[ " << it.first << ", "<< it.second << "]\n";
	std::cout << "\nassociate now contains " << associate.size() << " elements.\n";
	associate.clear();
	std::cout << "associate now contains " << associate.size() << " elements.\n";
}
