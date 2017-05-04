/*#include "opencv2/text.hpp"
#include "opencv2/core/utility.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv_contrib/modules/text/include/opencv2/text/ocr.hpp"
#include "opencv_contrib/modules/text/include/opencv2/text/erfilter.hpp"

#include <iostream>

using namespace std;
using namespace cv;
using namespace cv::text;

int main()
{


    Mat image;

        image  = imread("/home/ivan/Documentos/pruebaNumeros/test1.png");

    string vocabulary = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; // must have the same order as the clasifier output classes

    Ptr<OCRHMMDecoder::ClassifierCallback> ocr = cv::text::loadOCRBeamSearchClassifierCNN("/home/ivan/Documentos/pruebaNumeros/OCRBeamSearch_CNN_model_data.xml.gz");

    double t_r = (double)getTickCount();
    vector<int> out_classes;
    vector<double> out_confidences;

    ocr->eval(image, out_classes, out_confidences);

    cout << "OCR output = \"" << vocabulary[out_classes[0]] << "\" with confidence "
         << out_confidences[0] << ". Evaluated in "
         << ((double)getTickCount() - t_r)*1000/getTickFrequency() << " ms." << endl << endl;

    return 0;
}
*/
