#include "..\include\Sort.h"
#include <iostream>

void Sort::QuickSort(vector<int>& vec) {
	Sort::QuickSortUtility(vec, 0, (int)vec.size() - 1);
}

void Sort::QuickSortUtility(vector<int>& vec, int start, int end) {
	if (start >= end)return;
	// can be randomized 
	int selected = vec[end];
	int prev = start;
	for (int i = start; i < end; i++) {
		if (vec[i] <= selected) {
			swap(vec[i], vec[prev]);
			prev++;
		}
	}
	swap(vec[prev], vec[end]);
	// Only for output test
	/*std::cout << prev << endl;
	for (int i = start; i <= end; i++) {
		cout << vec[i] << " ";
	}
	cout << endl;*/
	QuickSortUtility(vec, start, prev - 1);
	QuickSortUtility(vec, prev + 1, end);
}

void Sort::MergeSort(vector<int>& vec) {
	Sort::MergeSortUtility(vec, 0, (int)vec.size() - 1);
}

void Sort::MergeSortUtility(vector<int>& vec, int start, int end) {
	if (start >= end)return;
	int mid = (start + end) / 2;
	vector<int> res;
	int p = start, q = mid + 1;
	MergeSortUtility(vec, start, mid);
	MergeSortUtility(vec, mid + 1, end);
	while (p <= mid && q <= end) {
		if (vec[p] < vec[q]) {
			res.push_back(vec[p]);
			p++;
		}
		else {
			res.push_back(vec[q]);
			q++;
		}
	}
	while (p <= mid) {
		res.push_back(vec[p]);
		p++;
	}
	while (q <= end) {
		res.push_back(vec[q]);
		q++;
	}
	for (int i = start; i <= end; i++) {
		vec[i] = res[i - start];
	}
}

