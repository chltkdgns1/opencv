#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;
void sub(Mat img) {
	img = Scalar(0, 0, 0);
}
int main(){
	Mat A;
	A = imread("C:\\Users\\chltk\\1.png", IMREAD_COLOR);
	imshow("before", A);
	sub(A);
	imshow("after", A);
	waitKey(0);
}
