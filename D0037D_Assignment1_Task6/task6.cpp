#include <iostream>
#include <string>
using namespace std;

int main() {

	string u_input;
	int n_prime;

	cout << "Enter the number of primes to write: ";
	cin >> u_input;
	n_prime = stoi(u_input);
	

	if (n_prime > 1) {
		cout << "2 ";

		for (int i_prime = 0; i_prime < n_prime - 1; i_prime++) {
			if (i_prime % 2 == 0)
				cout << i_prime * i_prime + (i_prime + 1) * (i_prime + 1) << " ";
			else
				cout << 4 * i_prime + 3 << " ";
		}
	}
	else if (n_prime == 1)
		cout << "2" << endl;

	cout << "done" << endl;

	return 0;
}