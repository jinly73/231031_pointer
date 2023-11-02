#include <iostream>
#include <vector>
using namespace std;

class Image // 클래스 = 새로운 자료형. 커스텀 자료형.
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

	
	//자료형* 변수명 = new 자료형;
	Image* 변수명 = new Image; // 위치
	cout << "포인터일까? : " << 변수명 << endl;

	Image* 변수명2 = new Image[10]; // 배열 = {원소1, 원소2, 원소3, ...}
	cout << "이미지의 주소값 : " << 변수명2 << endl;
	// 변수명2[0] = 주소값인 문자열의 0번째 원소 = ???
	// 변수명2[0].Y = 포인터가 '가리키는' 0번째 원소의 Y값
	//		*변수명2
	
	

	vector<Image*> Car;
	int* CarInt;
	Car.push_back(new Image);
	Car.push_back(new Image);
	Car.push_back(new Image); // Car = { Image, Image, Image } 근데 Image 는 포인터.
	// Image = 주소값 E000123sdf
	// *Image = 주소가 가리키는 값 = 클래스 속성을 가짐. = {X=10, Y=-8642134, R=123;kjsadf, G=sdfsdf, B=sadfsdf }

	Image ImageData; // ImageData = {X=10, Y=-8642134, R=123;kjsadf, G=sdfsdf, B=sadfsdf }
	cout << "변수로 선언 : " << ImageData.X << endl;

	cout << "X : " << (Car[0])->X << endl;

	/*
	for (int i = 0; i < N; ++i)
	{
		//(Car + i)->X = i;
		cout << "포인터로 선언 : " << Car[i] << endl;
		cout << "포인터가 가리키는 곳으로 가자 : " << (Car[i])->X << endl;
		cout << "포인터가 가리키는 곳으로 가자 : " << (		*(Car[i])		).X << endl;

		
	}
	*/

	Image* ImageArray = new Image;
	
	return 0;
}

