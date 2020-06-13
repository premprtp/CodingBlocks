#GCD |[Problem]|(https://hack.codingblocks.com/app/practice/6/1040/problem)

//Euclid's Algorithm for GCD|HCF & LCM

#include<iostream>
using namespace std;

int gcd(int a, int b) {
	return b==0? a: gcd(b,a%b);
}

int main() {
	int x,y;
	cin >> x >> y;
	cout<<gcd(x,y)<<endl;
	return 0;
}