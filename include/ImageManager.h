#pragma once

#include "header.h"
#include <functional>

typedef std::function<void(std::string, cv::Mat&)> Imagefunctor;

class ImageManager{
    public:
        void setLenaPath(std::string _lena_path);
        void setFunctor(bool _functor_flag);
        cv::Mat getImage();

    private:    
        std::string lena_path;
        Imagefunctor imf;
};