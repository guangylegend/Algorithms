#include "../include/Sort.h"
#include <iostream>

using namespace std;

int main() {
	vector<int> newVec({ 4,3,2,1 });
	Sort::QuickSort(newVec);
	for (int num : newVec) {
		cout << num << " ";
	}
	cin.get();
	return 0;
}