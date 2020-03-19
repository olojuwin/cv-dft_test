#include "dftTest.h"
#include<iostream>
#include <opencv2/core.hpp>  
#include <opencv2/highgui.hpp>  
#include <opencv2/imgproc.hpp> 

using namespace std;
using namespace cv;


 int dft_test()
{
	 int cols = 734;
	 int rows = 365;

	 //int flags = 0 | DFT_COMPLEX_INPUT;	
	 bool invert = 0;
	 int flags = invert ? DFT_ROWS + DFT_SCALE + DFT_INVERSE : DFT_ROWS;
	 //cv::Mat a = randomMat(cv::Size(cols, rows), CV_32FC2, 0.0, 10.0);

	 cv::Mat a = cv::Mat(rows, cols, CV_32FC2);
	 cv::randu(a, cv::Scalar::all(0), cv::Scalar::all(255));


	 //Mat a = Mat::ones(112, 112, CV_32FC2);

	 cv::Mat b_gold;
	 cv::dft(a, b_gold, flags);

	return int();
}
