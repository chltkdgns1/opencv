#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main(){
	Mat m(600, 800, CV_8UC3, Scalar(0, 255, 0));
	if (m.empty()) return cout << "������ ���� �� ����\n", -1;
	imshow("img", m);
	waitKey();
	return 0;
}
