#include <iostream>
#include <string>
using namespace std;

int main() {

	string uin;
	int nprime;
	int n = 1;

	cout << "Enter number of primes to print: ";
	cin >> uin;
	nprime = stoi(uin);

	if (nprime > 1) {

		cout << "2 ";
		int curval = 3;
		int valsqrt;

		while (n < nprime) {

			if (curval % 2 == 0) {
				curval++;
			}
			else {
				valsqrt = (int)(sqrt(curval) + 0.5);

				for(int testdiv = 2; testdiv <= valsqrt+1; testdiv++){

					if (curval % testdiv == 0 && testdiv <= valsqrt) {
						break;
					}
					else if(testdiv > valsqrt){
						n++;
						cout << curval << " ";
					}

				}
				curval++;
			}
			
		}
	}
	else if (nprime == 1)
		cout << "2";

}