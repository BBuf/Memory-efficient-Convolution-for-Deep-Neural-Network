#include <stdio.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <sys/time.h>

extern"C"
{
    #include<cblas.h>
}
using namespace std;

void im2col_cpu(float** src, const int &inHeight, const int &intWidth, const int &kHeight, 
                const int &kWidth, float* srcIm2col){
    const int outHeight = inHeight - kHeight + 1;
    const int outWidth = intWidth - kWidth + 1;
    
}

int main(){

}