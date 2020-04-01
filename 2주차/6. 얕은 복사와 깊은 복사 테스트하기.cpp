#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main(){
	Mat A = imread("C:\\Users\\chltk\\1.png", IMREAD_COLOR);
	Mat B = A;
	imshow("window 1", A);
	flip(B, B, 0);
	cout << "B¸¸ ¹Ý»ç½ÃÅ´\n";
	imshow("window 2", A);
	waitKey(0);
	return 0;
}
