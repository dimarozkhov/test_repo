#include<iostream>
using namespace std;
int Sum(int a, int b) {
	return a + b;
}
int Product(int a, int b) {
	return a * b;
}
int main() {

	cout << "Hello GIT" << endl;
	int a, b;
	cout << "Enter two value" << endl;
	cin >> a >> b;
	int res = Sum(a, b);
	cout << "Res = " << res << endl;

}