#include <iostream>
#include <vector>
using namespace std;

class Image // Ŭ���� = ���ο� �ڷ���. Ŀ���� �ڷ���.
{
public:

	int X=10;
	int Y;
	int R;
	int G;
	int B;
};

class TestC
{

};

int main()
{
	int N = 20000;

	
	//�ڷ���* ������ = new �ڷ���;
	Image* ������ = new Image; // ��ġ
	cout << "�������ϱ�? : " << ������ << endl;

	Image* ������2 = new Image[10]; // �迭 = {����1, ����2, ����3, ...}
	cout << "�̹����� �ּҰ� : " << ������2 << endl;
	// ������2[0] = �ּҰ��� ���ڿ��� 0��° ���� = ???
	// ������2[0].Y = �����Ͱ� '����Ű��' 0��° ������ Y��
	//		*������2
	
	

	vector<Image*> Car;
	int* CarInt;
	Car.push_back(new Image);
	Car.push_back(new Image);
	Car.push_back(new Image); // Car = { Image, Image, Image } �ٵ� Image �� ������.
	// Image = �ּҰ� E000123sdf
	// *Image = �ּҰ� ����Ű�� �� = Ŭ���� �Ӽ��� ����. = {X=10, Y=-8642134, R=123;kjsadf, G=sdfsdf, B=sadfsdf }

	Image ImageData; // ImageData = {X=10, Y=-8642134, R=123;kjsadf, G=sdfsdf, B=sadfsdf }
	cout << "������ ���� : " << ImageData.X << endl;

	cout << "X : " << (Car[0])->X << endl;

	/*
	for (int i = 0; i < N; ++i)
	{
		//(Car + i)->X = i;
		cout << "�����ͷ� ���� : " << Car[i] << endl;
		cout << "�����Ͱ� ����Ű�� ������ ���� : " << (Car[i])->X << endl;
		cout << "�����Ͱ� ����Ű�� ������ ���� : " << (		*(Car[i])		).X << endl;

		
	}
	*/

	Image* ImageArray = new Image;
	
	return 0;
}

