#include <iostream>

using namespace std;

int A = 10;
int B = 20;

void Swap(int* A, int* B)
{
	int PA = *A;
	*A = *B;
	*B = PA;

}


// pionter로 메모리 위치 이동
/*
void Swap(int* X, int* Y)
{
	
	int PA = *X;
	*X = *Y;
	*Y = PA;

}
*/ 


int main2()
{
	//포인터(=주소) 기본형
	/*
	int* P = new int[100];
	delete[] P;
	P = nullptr; // P메모리 값이 비어있다는 뜻

	if (P != nullptr) // P 써도 될지 물어보는
	{
		for (int i = 0; i < 100; ++i)
		{
			*(P+i) = 0;
			P[i] = 0;

		}
				
	}
	*/
	
	
	/*
	//int* PtrA = &A;
	//int* PtrB = &B;

	//Swap(PtrA, PtrB);

	Swap(&A, &B);

	cout << A << endl;
	cout << B << endl;
	*/
	return 0;
}
