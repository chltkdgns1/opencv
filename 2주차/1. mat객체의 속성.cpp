#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Mat img = imread("C:\\Users\\chltk\\1.png");
	if (img.empty()) return cout << "������ ���� �� ����\n", -1;
	imshow("img", img);

	cout << "���� �� = " << img.rows << "\n";
	cout << "���� �� = " << img.cols << "\n";
	cout << "����� ũ�� = " << img.size() << "\n";
	cout << "��ü ȭ�� ���� = " << img.total() << "\n";
	cout << "�� ȭ�� ũ�� = " << img.elemSize() << "\n";
	cout << "Ÿ�� = " << img.type() << "\n";
	cout << "ä�� = " << img.channels() << "\n";

	waitKey(0);
}