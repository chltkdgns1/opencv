#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

Mat img, roi;
int mx1, my1, mx2, my2;
bool cropping;

void onMouse(int e, int x, int y, int fg, void *param) {
	if (e == EVENT_LBUTTONDOWN) {
		mx1 = x, my1 = y;
		cropping = 1;
	}
	else if (e == EVENT_LBUTTONUP) {
		mx2 = x, my2 = y;
		cropping = 0;
		rectangle(img, Point(mx1, my1), Point(mx2 - mx1, my2 - my1), Scalar(0, 255, 0));
		// 책에 수록된 Rect 부분을 Point로 수정했습니다.
		imshow("image", img);
	}
}

int main(){
	img = imread("C:\\Users\\chltk\\2.png");
	imshow("image", img);
	Mat  clone = img.clone();

	setMouseCallback("image", onMouse);

	while (1) {
		int key = waitKey(100);
		if (key == 'q') break;
		else if (key == 'c') {
			roi = clone(Rect(mx1, my1, mx2 - mx1, my2 - my1));
			imwrite("C:\\Users\\chltk\\3.png", roi);
		}
	}
	return 0;
}
