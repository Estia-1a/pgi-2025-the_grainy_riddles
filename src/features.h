#ifndef FEATURES_H
#define FEATURES_H


void helloWorld();
void dimension(char *source_path);
void first_pixel (char *source_path);
void tenth_pixel (char *source_path);
void second_line(char *source_path);
void print_pixel( char *source_path, int X, int Y );
char* max_pixel(char *source_path);
void mirror_horizontal(char *source_path);
void rotate_acw(char *source_path);
void rotate_cw(char *source_path);
void mirror_vertical(char *source_path);
void mirror_total(char *source_path);
void scale_crop(char *sourcepath, int center_X, int center_Y, int W, int H);
char* min_pixel(char *source_path);
char* max_component(char *source_path,char color_pixel);
char* min_component(char *source_path, char color_pixel);
void stat_report(char *source_path);

#endif
