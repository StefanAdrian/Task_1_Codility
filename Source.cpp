#include <iostream>

int solution(int A[], int N);

int main()
{
	int arr[5] = { 1, 4, -1, 3, 2 };
	int nodes = solution(arr, 5);
	std::cout << "There are " << nodes << " nodes." << std::endl;
}

int solution(int A[], int N)
{
	int length = 1;

	for (int i = 0; i < N;)
	{
		if (A[i] == -1)
		{
			break;
		}
		else
		{
			i = A[i];
			++length;
		}
	}

	return length;
}
