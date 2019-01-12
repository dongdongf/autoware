#ifndef COLOR_FILTER_H_INCLUDED
#define COLOR_FILTER_H_INCLUDED

//headers in OpenCV
#include <opencv2/imgproc/imgproc.hpp>

class ColorFilter
{
public:
    ColorFilter();
    ~ColorFilter();
    std::vector<std::vector<cv::Point> > filterWhiteLine(cv::Mat image,cv::Mat ground_mask,cv::Mat& filtered_image);
    void updateParameters(double min_white_line_area,double max_white_line_area);
private:
    double max_white_line_area_;
    double min_white_line_area_;
    std::vector<std::vector<cv::Point> > filterWhiteLineContours(cv::Mat image, cv::Mat& dst_image);
};

#endif  //COLOR_FILTER_H_INCLUDED