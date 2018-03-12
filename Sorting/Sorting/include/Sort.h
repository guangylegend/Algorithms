#ifndef SORT_H
#define SORT_H
#include <vector>

using namespace std;

class Sort {
public:
	Sort() {};
	~Sort() {};

	static void QuickSort(vector<int>& vec);
	static void MergeSort(vector<int>& vec);
private:
	static void QuickSortUtility(vector<int>& vec, int start, int end);
	static void MergeSortUtility(vector<int>& vec, int start, int end);
};

#endif // !SORT_H
