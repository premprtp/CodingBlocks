#Trailing zeroes |[Problem](https://hack.codingblocks.com/app/practice/6/1041/problem)

#include<iostream>
using namespace std;

int onetrailing(int n) {

	int res = 0;
	int r = 5;
	while((n/r)>0) {
		res+=(n/r);
		r=r*5;
	}

	return res;

}

int main() {
	long long int n;

	cin>>n;

	cout << onetrailing(n) << endl;

	return 0;
}