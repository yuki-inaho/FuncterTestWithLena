#include "header.h"
#include "ImageManager.h"

std::string LENA_PATH = "../data/lena.jpg";

int 
main(int argc, char ** argv){
  //cv::Mat lena = cv::imread(LENA_PATH);
  ImageManager img_mng;
  img_mng.setLenaPath(LENA_PATH);
  
  if(argc > 1){
    int _switch = std::atoi(argv[1]);
    if(_switch < 4){
      img_mng.setFuncter(true); //color
    }else{
      img_mng.setFuncter(false); //grayscale
    }
  }else{
    img_mng.setFuncter(true);
  }
  cv::Mat lena = img_mng.getImage();

  while(cv::waitKey(10) != 27){
    cv::imshow("lena", lena);

  }
  cv::destroyAllWindows();
  return 0;
}
