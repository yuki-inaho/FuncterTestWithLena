#pragma once

#include "header.h"
#include <functional>

typedef std::function<void(std::string, cv::Mat&)> ImageFuncter;

class ImageManager{
    public:
        void setLenaPath(std::string _lena_path);
        void setFuncter(bool _functer_flag);
        cv::Mat getImage();

    private:    
        std::string lena_path;
        ImageFuncter imf;
};