/*
 * quickSort.cpp
 *
 *  Created on: 31 Aug 2016
 *      Author: mike
 */
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void partition(vector<int>  ar) {
   // Enter code for partitioning and printing here.
	int pivot = ar[0];
	vector<int>left;
	vector<int>equal;
	vector<int>right;
	for(unsigned int i = 0; i < ar.size(); i++){
		if(ar[i] < pivot) {
			left.push_back(ar[i]);
		} else if(ar[i] > pivot) {
			right.push_back(ar[i]);
		} else {
			equal.push_back(ar[i]);
		}
	}
	ar.clear();
	for(int i =0; i < left.size(); i++){
		ar.push_back(left[i]);
	}
	for(int i =0; i < equal.size(); i++){
			ar.push_back(equal[i]);
	}
	for(int i =0; i < right.size(); i++){
			ar.push_back(right[i]);
	}
	for(int i =0; i < ar.size(); i++){
		cout << ar[i] << " ";
	}
	cout << endl;
}
int main(void) {
   vector<int>  _ar;
   int _ar_size;
   cin >> _ar_size;

     for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp);
    }

   partition(_ar);

   return 0;
}




