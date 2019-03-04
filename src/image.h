#ifndef IMAGE_H
#define IMAGE_H

#include <float.h>
#include <math.h>
#include "darknet.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef OPENCV
void *open_video_stream(const char *f, int c, int w, int h, int fps);
image get_image_from_stream(void *p);
image load_image_cv(char *filename, int channels);
int show_image_cv(image im, const char* name, int ms);
#endif

float get_color(int c, int x, int max);
void draw_box(image a, int x1, int y1, int x2, int y2, float r, float g, float b);
void draw_bbox(image a, box bbox, int w, float r, float g, float b);
void write_label(image a, int r, int c, image *characters, char *string, float *rgb);
image image_distance(image a, image b);
void letterbox_image_into(image im, int w, int h, image boxed);
image resize_max(image im, int max);
void translate_image(image m, float s);
void embed_image(image source, image dest, int dx, int dy);
void saturate_image(image im, float sat);
void exposure_image(image im, float sat);
void distort_image(image im, float hue, float sat, float val);
void saturate_exposure_image(image im, float sat, float exposure);
void rgb_to_hsv(image im);
void hsv_to_rgb(image im);
void yuv_to_rgb(image im);
void rgb_to_yuv(image im);



image collapse_images_horz(image *ims, int n);
image collapse_images_vert(image *ims, int n);

void show_image_normalized(image im, const char *name);
void show_image_layers(image p, char *name);
void show_image_collapsed(image p, char *name);

void print_image(image m);

image make_empty_image(int w, int h, int c);
void copy_image_into(image src, image dest);

image get_image_layer(image m, int l);

#ifdef __cplusplus
}
#endif

#endif

