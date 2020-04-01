#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main(){
	Mat a = imread("C:\\Users\\chltk\\1.png");
	Mat b = imread("C:\\Users\\chltk\\2.png");
	Mat roi(a, Rect(a.cols - b.cols, a.rows - b.rows, b.cols, b.rows));
	b.copyTo(roi);
	imshow("result", a);
	waitKey(0);
}
