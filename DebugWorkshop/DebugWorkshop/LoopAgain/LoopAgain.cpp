#include <iostream>

int main()
{
	 int size = 0; // size cannot be unsigned int beacuse when it reaches -1 it  will put the biggest positive int value in it so the loop wont end.

	int t1 = 0, t2 = 1;

	std::cout << "what is the size of the series? ";
	std::cin >> size;

	while (size >= 0)
	{
		std::cout << t1 << ", ";

		int nextTerm = t1 + t2; // 1 , 2, 3
		t1 = t2; // 1, 1, 2
		t2 = nextTerm; // 1, 2

		size--;
	}

	return 0;
}