#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main(){
	vector <Point> points;

	for (int i = 0; i < 3; i++)
		points.push_back(Point((float)i, float(i * 10)));
	cout << points << "\n";
	system("pause");
	return 0;
}
