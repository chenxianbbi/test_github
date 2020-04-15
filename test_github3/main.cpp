#include<opencv2\opencv.hpp>
#include<iostream>
#include<math.h>

using namespace cv;
using namespace std;

Mat src, graySrc, dst;
Mat binImage, morpImage;

int main(int argc, char** argv) {
	src = imread("F:/OneDrive - 汕头大学/Test Temp/opencv/part03/case04.jpg");
	//判断是否成功读入
	if (src.empty())
	{
		printf("could not load image...123");
		return -1;
	}
	imshow("inputImage", src);

	waitKey(0);
	return 0;
}