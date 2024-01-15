#include "PmergeMe.hpp"

void	printVector(std::string s, std::vector<int> vector){
	std::cout << s;
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it){
		std::cout << *it <<" ";
	}
	std::cout << std::endl;

}

void merge(std::vector<int>& vector, std::vector<int>& leftVector, std::vector<int>& rightVector){
	std::vector<int>::iterator base = vector.begin();
	std::vector<int>::iterator left = leftVector.begin();
	std::vector<int>::iterator right = rightVector.begin();
	while (left != leftVector.end() && right != rightVector.end()){
		if (*left < *right) {
			*base = *left;
			left++;
		} else {
			*base = *right;
			right++;
		}
		base++;
	}
	while (left != leftVector.end()){
		*base = *left;
		left++;
		base++;
	}
	while (right != rightVector.end()){
		*base = *right;
		right++;
		base++;
	}
}

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

void mergeSort(std::vector<int>& vector){
	if (vector.size() <= SMALLARRAYSIZE){
		insertionSort(vector);
		return;
	}
	std::vector<int>::iterator mid = vector.begin() + (vector.size() + 1) / 2;
	std::vector<int> leftVector(vector.begin(), mid);
	std::vector<int> rightVector(mid , vector.end());
	mergeSort(leftVector);
	mergeSort(rightVector);
	merge(vector, leftVector, rightVector);
}

void sort(std::vector<int>& vector){
	mergeSort(vector);
}

void checkDouble(std::vector<int> vector){
	std::set<int> set(vector.begin(), vector.end());
	if (set.size() != vector.size())
		throw NotUniqueException();
}

void	program(int ac, char** av){

	std::vector<int>	vector;
	int	buff;
	for (int i = 1; i < ac; ++i){
			std::stringstream ss(av[i]);
			ss >> buff;
			if (ss.fail())
				throw NotNumericInputException();
			if (buff < 0)
				throw NegativeNumberException();
			ss.clear();
			vector.insert(vector.end(),buff);
	}
	checkDouble(vector);
	printVector("before:   ", vector);
	sort(vector);
	printVector("after:   ", vector);
}