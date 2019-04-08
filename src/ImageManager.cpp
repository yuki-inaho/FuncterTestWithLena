#include "ImageManager.h"

void 
ImageManager::setLenaPath(std::string _lena_path){
    lena_path = _lena_path;
}

void 
ImageManager::setFunctor(bool _functor_switch_flag){
    bool functor_switch_flag = _functor_switch_flag;

    if(functor_switch_flag){
        imf = [=](std::string _lena_path, cv::Mat &img){img = cv::imread(_lena_path, cv::IMREAD_COLOR);};
    }else{
        imf = [=](std::string _lena_path, cv::Mat &img){img = cv::imread(_lena_path, cv::IMREAD_GRAYSCALE);};
    }
}

cv::Mat 
ImageManager::getImage(){
    cv::Mat img_lena;
    imf(lena_path, img_lena);
    return (img_lena);
}
