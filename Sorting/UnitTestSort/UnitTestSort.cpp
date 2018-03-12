#include "stdafx.h"
#include "CppUnitTest.h"
#include <iostream>
#include "../Sorting/include/Sort.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestSort {		
	TEST_CLASS(UnitTestSort) {
	private:
		bool Test_Sort_Utility(vector<int>& vec) {
			for (int i = 1; i < (int)vec.size(); i++) {
				if (vec[i] < vec[i - 1]) {
					return false;
				}
			}
			return true;
		}

		void Test_Sort_Print(vector<int>& vec) {
			for (int i = 0; i < (int)vec.size(); i++) {
				string s = to_string(vec[i]).append(" ");
				Logger::WriteMessage(s.c_str());
			}
			Logger::WriteMessage("\n");
		}

	public:

		TEST_METHOD(TestQuickSortEmpty) {
			vector<int> newVec({});
			Sort::QuickSort(newVec);
			Assert::AreEqual(true, Test_Sort_Utility(newVec));
		}

		TEST_METHOD(TestQuickSortSingle) {
			vector<int> newVec({ 15 });
			Sort::QuickSort(newVec);
			Assert::AreEqual(true, Test_Sort_Utility(newVec));
		}

		TEST_METHOD(TestQuickSortReverse) {
			vector<int> newVec({ 4,3,2,1 });
			Sort::QuickSort(newVec);
			Test_Sort_Print(newVec);
			Assert::AreEqual(true, Test_Sort_Utility(newVec));
		}

		TEST_METHOD(TestQuickSortRandom) {
			vector<int> newVec({ 4,2,10,5,6,8,1 });
			Sort::QuickSort(newVec);
			Assert::AreEqual(true, Test_Sort_Utility(newVec));
		}

		TEST_METHOD(TestQuickSortDuplicate) {
			vector<int> newVec({ 4,2,3,1,2,1 });
			Sort::QuickSort(newVec);
			Assert::AreEqual(true, Test_Sort_Utility(newVec));
		}

		TEST_METHOD(TestQuickSortAllEqual) {
			vector<int> newVec({ 1,1,1,1,1,1,1,1 });
			Sort::QuickSort(newVec);
			Assert::AreEqual(true, Test_Sort_Utility(newVec));
		}

		TEST_METHOD(TestQuickSortNegative) {
			vector<int> newVec({ -1,1,3,-1,1,-10,2,1 });
			Sort::QuickSort(newVec);
			Assert::AreEqual(true, Test_Sort_Utility(newVec));
		}

		TEST_METHOD(TestMergeSortEmpty) {
			vector<int> newVec({});
			Sort::MergeSort(newVec);
			Assert::AreEqual(true, Test_Sort_Utility(newVec));
		}

		TEST_METHOD(TestMergeSortSingle) {
			vector<int> newVec({15});
			Sort::MergeSort(newVec);
			Assert::AreEqual(true, Test_Sort_Utility(newVec));
		}

		TEST_METHOD(TestMergeSortReverse) {
			vector<int> newVec({ 4,3,2,1 });
			Sort::MergeSort(newVec);
			Assert::AreEqual(true, Test_Sort_Utility(newVec));
		}

		TEST_METHOD(TestMergeSortRandom) {
			vector<int> newVec({ 4,2,10,5,6,8,1 });
			Sort::MergeSort(newVec);
			Assert::AreEqual(true, Test_Sort_Utility(newVec));
		}

		TEST_METHOD(TestMergeSortDuplicate) {
			vector<int> newVec({ 4,2,3,1,2,1 });
			Sort::MergeSort(newVec);
			Assert::AreEqual(true, Test_Sort_Utility(newVec));
		}

		TEST_METHOD(TestMergeSortAllEqual) {
			vector<int> newVec({ 1,1,1,1,1,1,1,1 });
			Sort::MergeSort(newVec);
			Assert::AreEqual(true, Test_Sort_Utility(newVec));
		}

		TEST_METHOD(TestMergeSortNegative) {
			vector<int> newVec({ -1,1,3,-1,1,-10,2,1 });
			Sort::MergeSort(newVec);
			Assert::AreEqual(true, Test_Sort_Utility(newVec));
		}
	};
}