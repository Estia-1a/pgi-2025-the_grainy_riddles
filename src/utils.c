#include <estia-image.h>
#include <stddef.h>
#include "utils.h"
 
 
 
pixelRGB * get_pixel( unsigned char* data, const unsigned int W, const unsigned int H, const unsigned int CH, const unsigned int X, const unsigned int Y ){
 
 if (X>W||Y>H){
        return NULL ;
    }
    else
     return (pixelRGB *) &data[(Y * W + X) * CH] ;
}
 