#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main(){
	Mat a = imread("C:\\Users\\chltk\\2.png");
	imshow("img", a);
	Mat roi(a, Rect(10, 10, 2, 2));

	cout << "���Ǽ� = " << roi.rows << "\n";
	cout << "���� �� = " << roi.cols << "\n";
	cout << "roi = " << "\n" << roi << "\n\n";
	waitKey(0); return 0;
}
