#include<opencv2\opencv.hpp>
#include<iostream>
#include<math.h>

using namespace cv;
using namespace std;

Mat src, graySrc, dst;
Mat binImage, morpImage;

int main(int argc, char** argv) {
	src = imread("F:/OneDrive - ��ͷ��ѧ/Test Temp/opencv/part03/case04.jpg");
	//�ж��Ƿ�ɹ�����
	if (src.empty())
	{
		printf("could not load image...123");
		return -1;
	}
	imshow("inputImage", src);

	waitKey(0);
	return 0;
}