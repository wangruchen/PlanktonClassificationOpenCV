//
//  extractFeature.h
//  lbp
//
//  Created by wangruchen on 15/7/10.
//  Copyright (c) 2015年 wangruchen. All rights reserved.
//

#ifndef __lbp__extractFeature__
#define __lbp__extractFeature__

#include <opencv/cv.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/features2d.hpp>
#include <opencv2/xfeatures2d.hpp>
#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace cv;
using namespace std;
using namespace cv::xfeatures2d;

Mat extractFeature(vector<string> imgName);

#endif /* defined(__lbp__extractFeature__) */
