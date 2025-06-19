#include <estia-image.h>
#include <stdio.h>

#include "features.h"
#include "utils.h"
#include <stdlib.h>


/**
 * @brief Here, you have to code features of the project.
 * Do not forget to commit regurlarly your changes.
 * Your commit messages must contain "#n" with: n = number of the corresponding feature issue.
 * When the feature is totally implemented, your commit message must contain "close #n".
 */

/// @brief 
void helloWorld() {
    printf("Hello World !!!");
}
void dimension(char* source_path) {

    unsigned char* data = NULL;
    int W=0,H=0,CH=0;
    read_image_data(source_path,&data,&W,&H,&CH);
    printf("dimension :%d,%d\n",W,H);
}
void first_pixel(char* source_path){

    unsigned char* data = NULL;
    int W,H,CH;
   
    read_image_data(source_path,&data,&W,&H,&CH);
   
    unsigned char R=data[0];
    unsigned char G=data[1];
    unsigned char B=data[2];
 
    printf("first_pixel:%d,%d,%d",R,G,B);
}
void mirror_horizontal(char *source_path){
    unsigned char* data=NULL;
    int W,H,CH,X,Y;
    read_image_data(source_path,&data,&W,&H,&CH);
    unsigned char* mirror_hor_data=malloc(W*H*CH);
    for(Y=0;Y<H;Y++){
        for(X=0;X<W;X++){
            pixelRGB *current_pixel=get_pixel(data,W,H,CH,X,Y);
            int Xnew=W-1-X;
            int Ynew=Y;
            pixelRGB* mirror_hor_pixel = get_pixel(mirror_hor_data,W,H,CH,Xnew,Ynew);
            mirror_hor_pixel->R = current_pixel->R;
            mirror_hor_pixel->G = current_pixel->G;
            mirror_hor_pixel->B = current_pixel->B;
        }
    }
    write_image_data("image_out.bmp", mirror_hor_data,W,H);
    free(mirror_hor_data);
}
void tenth_pixel (char *source_path) {
    unsigned char *data;
    int W,H,CH;
    read_image_data(source_path,&data,&W,&H,&CH);
    printf("tenth_pixel:%d,%d,%d\n",data[27],data[28],data[29]);
}
void second_line (char *source_path) {
    unsigned char *data;
    int W,H,CH;
    read_image_data(source_path,&data,&W,&H,&CH);
    printf("second_line:%d,%d,%d\n",data[W*3],data[W*3+1],data[W*3+2]);
}
void print_pixel(char* source_path,int X,int Y){
 
    unsigned char* data=NULL;
    int W,H,CH;
    read_image_data(source_path,&data,&W,&H,&CH);
    pixelRGB * pixel = get_pixel(data,W,H,CH,X,Y);
    printf("print_pixel(%d %d):%d,%d,%d\n",X,Y,pixel->R,pixel->G,pixel->B);
}
char* max_pixel(char* source_path){
    unsigned char* data=NULL;
    int W,H,CH,X,Y;
	int S=0;
    int Xmax=0;
    int Ymax=0;
    read_image_data(source_path,&data,&W,&H,&CH);
    pixelRGB*max_pixel=get_pixel(data,W,H,CH,0,0);
	pixelRGB*first_pixel=get_pixel(data,W,H,CH,0,0);
	int Smax=first_pixel->R+first_pixel->G+first_pixel->B;
    for(Y=0;Y<H;Y++){
        for(X=0;X<W;X++){
            pixelRGB*pixel=get_pixel(data,W,H,CH,X,Y);
            S=pixel->R+pixel->G+pixel->B;
            if(S>Smax){
			    Ymax=Y;
				Xmax=X;
				max_pixel=pixel;
                Smax=S;                
            }
        }
    }
    printf("max_pixel(%d %d):%d,%d,%d\n",Xmax,Ymax,max_pixel->R,max_pixel->G,max_pixel->B);
    char* res=malloc(100);
    sprintf(res,"max_pixel(%d %d):%d,%d,%d\n",Xmax,Ymax,max_pixel->R,max_pixel->G,max_pixel->B);
    return res;  

}
void rotate_acw(char *source_path){
    unsigned char* data=NULL;
    int W,H,CH,X,Y;
    read_image_data(source_path,&data,&W,&H,&CH);
    unsigned char* rotate_acw_data = calloc(W*H*CH,sizeof(unsigned char));
    for(Y=0;Y<H;Y++){
        for(X=0;X<W;X++){
            pixelRGB* current_pixel=get_pixel(data,W,H,CH,X,Y);
            int Xnew=Y;
            int Ynew=W-1-X;
            pixelRGB* rotate_acw_pixel=get_pixel(rotate_acw_data,H,W,CH,Xnew,Ynew);
            rotate_acw_pixel->R = current_pixel->R;
            rotate_acw_pixel->G = current_pixel->G;
            rotate_acw_pixel->B = current_pixel->B;
        }
    }
    write_image_data("image_out.bmp", rotate_acw_data,H,W);
    free (rotate_acw_data);
}
void mirror_vertical(char *source_path){
   unsigned char* data=NULL;
    int W,H,CH,X,Y;
    read_image_data(source_path,&data,&W,&H,&CH);
    unsigned char* mirror_vert_data = calloc(W*H*CH,sizeof(unsigned char));
    for(Y=0;Y<H;Y++){
        for(X=0;X<W;X++){
            pixelRGB* current_pixel=get_pixel(data,W,H,CH,X,Y);
            int Xnew=X;
            int Ynew=H-1-Y;
            pixelRGB* mirror_vert_pixel=get_pixel(mirror_vert_data,W,H,CH,Xnew,Ynew);
            mirror_vert_pixel->R = current_pixel->R;
            mirror_vert_pixel->G = current_pixel->G;
            mirror_vert_pixel->B = current_pixel->B;
        }
    }
    write_image_data("image_out.bmp", mirror_vert_data,W,H);
    free(mirror_vert_data);
}
void mirror_total(char *source_path){
    unsigned char* data=NULL;
    int W,H,CH,X,Y;

    read_image_data(source_path,&data,&W,&H,&CH);
    unsigned char* mirror_tot_data = calloc(W*H*CH,sizeof(unsigned char));
    for(Y=0;Y<H;Y++){
        for(X=0;X<W;X++){      
            pixelRGB* original_pixel=get_pixel(data,W,H,CH,X,Y);
            int Xnew=W-1-X;
            int Ynew=H-1-Y;
            pixelRGB* mirror_tot_pixel=get_pixel(mirror_tot_data,W,H,CH,Xnew,Ynew);
            mirror_tot_pixel->R = original_pixel->R;
            mirror_tot_pixel->G = original_pixel->G;
            mirror_tot_pixel->B = original_pixel->B;
        }
    }
    write_image_data("image_out.bmp", mirror_tot_data,W,H);
    free(mirror_tot_data);
}
void rotate_cw(char *source_path){
    unsigned char* data = NULL;
    int w, h, n, x, y;
    read_image_data(source_path, &data, &w, &h, &n);
    unsigned char* rotate_cw_data = malloc(w * h * n);
    for(y=0; y<h; y++){
        for(x=0; x<w; x++){      
            pixelRGB* current_pixel = get_pixel(data, w, h, n, x, y);
            int nouveau_x = h - 1 - y;
            int nouveau_y = x;
            pixelRGB* rotate_cw_pixel = get_pixel(rotate_cw_data, h, w, n, nouveau_x, nouveau_y);
            rotate_cw_pixel->R = current_pixel->R;
            rotate_cw_pixel->G = current_pixel->G;
            rotate_cw_pixel->B = current_pixel->B;
        }
    }
    write_image_data("image_out.bmp", rotate_cw_data, h, w);
    free(rotate_cw_data);
}
char* min_pixel(char* source_path){
    unsigned char* data=NULL;
    int W,H,CH,X,Y;
	int S;
    int Xmin=0;
    int Ymin=0;
 
    read_image_data(source_path,&data,&W,&H,&CH);
    pixelRGB*min_pixel=get_pixel(data,W,H,CH,0,0);
    pixelRGB*first_pixel=get_pixel(data,W,H,CH,0,0);
    int Smin=first_pixel->R+first_pixel->G+first_pixel->B;
    for(Y=0;Y<H;Y++){
		
        for(X=0;X<W;X++){
            pixelRGB*pixel=get_pixel(data,W,H,CH,X,Y);
            S=pixel->R+pixel->G+pixel->B;
			
            if(S<Smin){
                Smin=S;
                Xmin=X;
                Ymin=Y;
                min_pixel=pixel;
            }
        }
    }
    printf("min_pixel(%d %d):%d,%d,%d\n",Xmin,Ymin,min_pixel->R,min_pixel->G,min_pixel->B);
    char* res=malloc(100);
    sprintf(res,"min_pixel(%d %d):%d,%d,%d\n",Xmin,Ymin,min_pixel->R,min_pixel->G,min_pixel->B);
    return res;
}
char* max_component(char *source_path,char color_pixel){
    unsigned char* data=NULL;
    int W,H,CH,X,Y;
    int Xmax=0;
    int Ymax=0;
    int color_pixel_val=0;
    int color_pixel_max=0;
   
    read_image_data(source_path,&data,&W,&H,&CH);
    for(Y=0;Y<H;Y++){
	
        for(X=0;X<W;X++){
		
            pixelRGB*pixel=get_pixel(data,W,H,CH,X,Y);
            if (color_pixel=='R'){
                color_pixel_val=pixel->R;
            }
			
            else if (color_pixel=='G'){
                color_pixel_val=pixel->G;
            }
			
            else if (color_pixel=='B'){
                color_pixel_val=pixel->B;
            }
			
            if(color_pixel_val>color_pixel_max){
                color_pixel_max=color_pixel_val;
                Xmax=X;
                Ymax=Y;
            }
        }
    }
	
    printf("max_component %c (%d %d):%d\n",color_pixel,Xmax,Ymax,color_pixel_max);
    char* res=malloc(100);
    sprintf(res,"max_component %c (%d %d): %d\n",color_pixel,Xmax,Ymax,color_pixel_max);
    return res;
}
char* min_component(char *source_path,char color_pixel){
    unsigned char* data=NULL;
    int W,H,CH,X,Y;
    int Xmin=0;
    int Ymin=0;
    int color_pixel_val=0;
    int color_pixel_min;
    read_image_data(source_path,&data,&W,&H,&CH);
    pixelRGB*first_pixel=get_pixel(data,W,H,CH,0,0);
	
    if (color_pixel=='R'){
        color_pixel_min=first_pixel->R;
    }
	
    else if (color_pixel=='G'){
        color_pixel_min=first_pixel->G;
    }
	
    else if (color_pixel=='B'){
        color_pixel_min=first_pixel->B;
    }
   
    for(Y=0;Y<H;Y++){
	
        for(X=0;X<W;X++){
            pixelRGB*pixel=get_pixel(data,W,H,CH,X,Y);
			
            if (color_pixel=='R'){
                color_pixel_val=pixel->R;
            }
            else if (color_pixel=='G'){
                color_pixel_val=pixel->G;
            }
			
            else if (color_pixel=='B'){
                color_pixel_val=pixel->B;
            }
			
            if(color_pixel_val<color_pixel_min){
                color_pixel_min = color_pixel_val;
                Xmin=X;
                Ymin=Y;
            }
        }
    }
    printf("min_component %c (%d %d):%d\n",color_pixel,Xmin,Ymin,color_pixel_min);
    char* res=malloc(100);
    sprintf(res,"min_component %c (%d %d):%d\n",color_pixel,Xmin,Ymin,color_pixel_min);
    return res;
}
void stat_report(char *source_path){
	
    FILE *report = fopen("file.txt", "w");
   
    char* maxpixel=max_pixel(source_path);
    char* minpixel=min_pixel(source_path);
    char* max_componentR=max_component(source_path,'R');
    char* max_componentG=max_component(source_path,'G');
    char* max_componentB=max_component(source_path,'B');
    char* min_componentR=min_component(source_path,'R');
    char* min_componentG=min_component(source_path,'G');
    char* min_componentB=min_component(source_path,'B');
	
    fprintf(report,"%s",maxpixel);
    fprintf(report,"%s",minpixel);
    fprintf(report,"%s",max_componentR);
    fprintf(report,"%s",max_componentG);
    fprintf(report,"%s",max_componentB);
    fprintf(report,"%s",min_componentR);
    fprintf(report,"%s",min_componentG);
    fprintf(report,"%s",min_componentB);
    fclose(report);
}
void color_red(char *source_path){
    unsigned char* data=NULL;
    int W,H,CH,X,Y;
    read_image_data(source_path,&data,&W,&H,&CH);
    for(Y=0;Y<H;Y++){

        for(X=0;X<W;X++){
            pixelRGB*pixel=get_pixel(data,W,H,CH,X,Y);
            pixel->G=0;
            pixel->B=0;
        }
    }
    write_image_data("image_out.bmp",data,W,H);
}
void color_green (char *source_path) {
    unsigned char *data;
    int W,H,CH;
 
    read_image_data(source_path,&data,&W,&H,&CH);
 
    for(int k=0;k<W*H;k++) {
        data[3*k]=0;
        data[2+3*k]=0;
    }
    write_image_data("image_verte.bmp",data,W,H);
    printf("color_green\n");
}
void color_blue (char *source_path) {
    unsigned char *data;
    int W,H,CH;
 
    read_image_data(source_path, &data, &W, &H, &CH);
 
    for(int k=0;k<W*H;k++) {
        data[3*k]=0;
        data[1+3*k]=0;
    }
    write_image_data("image_bleu.bmp",data,W,H);
    printf("color_blue\n");
}
void color_gray (char *source_path) {
    unsigned char *data;
    int W,H,CH;
 
    read_image_data(source_path,&data,&W,&H,&CH);
 
    for (int k=0;k<3*W*H;k+=3) {
        unsigned char gray = (data[k] + data[k+1] + data[k+2]) / 3;
        data[k] = gray;
        data[k+1] = gray;
        data[k+2] = gray;
    }
    write_image_data("image_grise.bmp",data,W,H);
    printf("color_gray\n");
}
void color_gray_luminance (char *source_path) {
    unsigned char *data;
    int W,H,CH;
 
    read_image_data(source_path,&data,&W,&H,&CH);
 
    for (int k=0;k<3*W*H;k+=3) {
        unsigned char gray=(0.21*data[k]+0.72*data[k+1]+0.07*data[k+2]);
        data[k]=gray;
        data[k+1]=gray;
        data[k+2]=gray;
    }
    write_image_data("image_grise_luminance.bmp",data,W,H);
    printf("color_gray_luminance\n");
}
void color_invert(char *source_path) {
    unsigned char *data;
    int W,H,CH;
 
    read_image_data(source_path,&data,&W,&H,&CH);
 
    for (int k=0;k<3*W*H;k++) {
        data[k]=255-data[k];
    }
    write_image_data("image_inversion.bmp",data,W,H);
    printf("color_invert\n");
}