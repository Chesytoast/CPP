#include "PmergeMe.hpp"

void insertionSort(std::vector<int>& vector){
	int key, j;
	int size = vector.size();
	for (int i = 1; i < size; i++){
		key = vector[i];
		j = i - 1;
		// printVector("visualize insertion:\n   ", vector);
		while (j >= 0 && key < vector[j]){
			vector[j + 1] = vector[j];
			--j;
			// printVector("   ", vector);
		}
		vector[j + 1] = key;
		// printVector("   ", vector);
	}	
}

void swap(std::list<int>::iterator& x, std::list<int>::iterator& y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void	insertionSort(std::list<int>& list){
	std::list<int>::iterator	it = list.begin();
	std::list<int>::iterator	scnd;
	int key;
	++it;
	for (; it != list.end(); it++){
		key = *it;
		scnd = it;
		while(scnd != list.begin() && key < *(--scnd)){
			swap(scnd, it);
			--it;
		}
	}
}
