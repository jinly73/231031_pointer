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


// pionter�� �޸� ��ġ �̵�
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
	//������(=�ּ�) �⺻��
	/*
	int* P = new int[100];
	delete[] P;
	P = nullptr; // P�޸� ���� ����ִٴ� ��

	if (P != nullptr) // P �ᵵ ���� �����
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
