#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main(){
	Mat img = imread("C:\\Users\\chltk\\1.png");
	if (img.empty()) return cout << "������ ���� �� ����\n", -1;
	imshow("img", img);

	cout << img << "\n";
	waitKey(0);
	return 0;
}