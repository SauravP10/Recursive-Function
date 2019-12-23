

#include<iostream>

using namespace std;

int LHS(int n) {
	
	int sum = (n * (n + 1) * (2 * n + 1)) / 6;

	return sum;
}

int RHS(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		int sum = (n * n) + RHS(n - 1);
		return sum;
	}
}

int reversedArray(int a[], int first, int last) {
	int temp;

	if (first < last) {
		temp = a[first];
		a[first] = a[last];
		a[last] = temp;

		reversedArray(a, first + 1, last - 1);
	}

	return 0;
}

int main() {
	
	int opt;

	do {
		cout << "1. Check Part A of Program" << endl;
		cout << "2. Check Part B of Program" << endl;
		cout << "3. Quit" << endl;
		cin >> opt;

		switch (opt) {
		case 1:
			int i;
			cout << "Enter a number: " << endl;
			cin >> i;

			cout << "LHS: " << LHS(i) << endl;
			cout << "RHS: " << RHS(i) << endl;
			if (LHS(i) == RHS(i)) {
				cout << "Both cases of Mathematical Induction are same." << endl;
			}

			break;

		case 2:
			int n, arr[100];

			cout << "Enter the size of an array: " << endl;
			cin >> n;

			cout << "Enter an element of an array: " << endl;;

			for (int i = 0; i < n; i++) {
				cin >> arr[i];
			}

			reversedArray(arr, 0, n - 1);

			cout << "Reversed array is: " << endl;

			for (int i = 0; i < n; i++) {
				cout << arr[i] << " ";
			}
			cout << endl;

			break;

		case 3:
			break;
		default:
			cout << "Wrong Input" << endl;
			break;
		}
	} while (opt != 3);
	
	system("PAUSE");

	return 0;
}