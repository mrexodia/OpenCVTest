#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

cv::Mat src, dst;

int main(int argc, char* argv[])
{
    src = cv::imread(argv[1], 1);
    cv::imshow("unprocessed image", src);
    cvWaitKey();
    return 0;
}