#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <map>
using namespace cv;
using namespace std;

Scalar color(255, 255, 255);
// 도형 내부 채울때 사용할 색 지정시 사용 ( 초기값은 흰색 )
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
	img = Mat(Size(800, 600), CV_8UC3, Scalar(0, 0, 0));
	circle(img, Point(100, 100), 50, color, -1);
	imshow("img", img);
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