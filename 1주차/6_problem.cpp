#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <map>
using namespace cv;
using namespace std;


Scalar color(255, 255, 255);
// ���� ���� ä�ﶧ ����� �� ������ ��� ( �ʱⰪ�� ��� )
Mat img;

void mouse_callback(int event, int x, int y, int flags, void *userdata) {
	if (event == 1) {
		rectangle(img, Point(x - 50, y - 50), Point(x + 50, y + 50), color, -1);
	}
	else if (event == 2) {
		circle(img, Point(x, y), 50, color, -1);
	}
}

int main() {
	cout << "1. ���� ���콺 Ŭ���� �簢�� ����\n";
	cout << "2. ������ ���콺 Ŭ���� �� ����\n";
	cout << "3. x ��ư Ŭ���� ����\n";
	img = Mat(Size(800, 600), CV_8UC3, Scalar(0, 0, 0));
	namedWindow("img");
	setMouseCallback("img", mouse_callback, 0);

	while (1) {
		imshow("img", img);
		int key = waitKey(1);

		if (key == 'x') break;
	}
	
	destroyAllWindows();
	waitKey(0);
}



/*
int main()
{
	cout << "OpenCV Version : " << CV_VERSION << endl;
	namedWindow("img-raw", cv::WINDOW_AUTOSIZE);
	namedWindow("img-gray", cv::WINDOW_AUTOSIZE);
	namedWindow("img-canny", cv::WINDOW_AUTOSIZE);
	Mat rawimg, grayimg, cannyimg;

	rawimg = imread("d:\\opencvimage\\b.png", IMREAD_COLOR);
	imshow("img-raw", rawimg);

	cvtColor(rawimg, grayimg, cv::COLOR_BGR2GRAY);
	Canny(grayimg, cannyimg, 10, 100, 3, true);
	imshow("img-gray", grayimg);
	imshow("img-canny", cannyimg);

	waitKey(0);
	destroyAllWindows();

	system("pause");
	return 0;
}
*/