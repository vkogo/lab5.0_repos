#include<iostream>
#include<cmath>
using namespace std;
double f(double a, double b, double c);
int main() {
	double s, t;
	cout << "Enter value s ->"; cin >> s;
	cout << "Enter value t ->"; cin >> t;
	double res = f(1, t * t, s) + f(t, s * s, 1);
	cout << "Result = " << res << endl;
}
double f(double a, double  b, double c) {
	return (sin(a * b * c) * sin(a * b * c)) / (a * a + b * b + c * c);
}

