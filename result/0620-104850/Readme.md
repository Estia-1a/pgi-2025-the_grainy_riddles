# Daily Evaluation 20/06 - 10:48:50
You can find below how you did for each feature. 
 You should merge the pull request to keep the eval and automatically close and open the issues you have finished!
# Milestone  Tutorial
Score : 19/23 :  82%
## Detail by Feature
| Feature     | Score       | Missed tests                                                                                                           | Stdout                            |
| :---------- | :---------- | :--------------------------------------------------------------------------------------------------------------------- | :-------------------------------- |
| dimension   | 4/4 :  100% |                                                                                                                        |                                   |
| first_pixel | 5/5 :  100% |                                                                                                                        |                                   |
| tenth_pixel | 5/5 :  100% |                                                                                                                        |                                   |
| second_line | 5/5 :  100% |                                                                                                                        |                                   |
| print_pixel | 0/4 :  0%   | Print Pixel (0,0) : 0,0,0<br>Print Pixel (2,3) : 20,30,26<br>Print Pixel (3,2) : 30,20,19<br>Print Pixel (7,7) : 0,0,0 | print_pixel(0 0):0,0,0<br>print_… |

# Milestone  statistiques
Score : 0/26 :  0%
## Detail by Feature
| Feature         | Score     | Missed tests                                                                          | Stdout                            |
| :-------------- | :-------- | :------------------------------------------------------------------------------------ | :-------------------------------- |
| max_pixel       | 0/4 :  0% | Max Pixel black 8x8<br>Max Pixel white 8x8<br>Max Pixel at 6 5<br>Max Pixel at 3 4    | max_pixel(0 0):0,0,0<br>max_pixe… |
| min_pixel       | 0/4 :  0% | Min Pixel black 8x8<br>Min Pixel white 8x8<br>Min Pixel at 6 5<br>Min Pixel at 3 4    | min_pixel(0 0):0,0,0<br>min_pixe… |
| min_component R | 0/3 :  0% | Min Component R of black 8x8<br>Min Component R of white 8x8<br>Min Component 2 0 5   | min_component R (0 0):0<br>min_c… |
| min_component G | 0/3 :  0% | Min Component G of black 8x8<br>Min Component G of white 8x8<br>Min Component 2 0 5   | min_component G (0 0):0<br>min_c… |
| min_component B | 0/3 :  0% | Min Component B of black 8x8<br>Min Component B of white 8x8<br>Min Component 2 0 5   | min_component B (0 0):0<br>min_c… |
| max_component R | 0/3 :  0% | Max Component R of black 8x8<br>Max Component R of white 8x8<br>Max Component 2 0 255 | max_component R (0 0):0<br>max_c… |
| max_component G | 0/3 :  0% | Max Component G of black 8x8<br>Max Component G of white 8x8<br>Max Component 2 0 255 | max_component G (0 0):0<br>max_c… |
| max_component B | 0/3 :  0% | Max Component B of black 8x8<br>Max Component B of white 8x8<br>Max Component 2 0 255 | max_component B (0 0):0<br>max_c… |

# Milestone  colors
Score : 5/35 :  14%
## Detail by Feature
| Feature              | Score       | Missed tests                                                                                                                                              | Stdout                             |
| :------------------- | :---------- | :-------------------------------------------------------------------------------------------------------------------------------------------------------- | :--------------------------------- |
| color_red            | 5/5 :  100% |                                                                                                                                                           |                                    |
| color_blue           | 0/5 :  0%   | Convert red image to BLUE<br>Convert blue image to BLUE<br>Convert green Image to BLUE<br>Convert white Image to BLUE<br>convert black Image to BLUE      | color_blue<br>color_blue<br>colo…  |
| color_green          | 0/5 :  0%   | Convert red image to GREEN<br>Convert blue image to GREEN<br>Convert green Image to GREEN<br>Convert white Image to GREEN<br>convert black Image to GREEN | color_green<br>color_green<br>co…  |
| color_gray           | 0/5 :  0%   | Convert red image to GRAY<br>Convert blue image to GRAY<br>Convert green Image to GRAY<br>Convert white Image to GRAY<br>convert black Image to GRAY      | color_gray<br>color_gray<br>colo…  |
| color_invert         | 0/5 :  0%   | Invert red image<br>Invert blue image<br>Invert green Image<br>Invert white Image<br>Invert black Image                                                   | color_invert<br>color_invert<br>…  |
| color_gray_luminance | 0/5 :  0%   | Convert red image to GRAY<br>Convert blue image to GRAY<br>Convert green Image to GRAY<br>Convert white Image to GRAY<br>convert black Image to GRAY      | color_gray                         |
                                                                                                                                                                                                   color_gray_luminance<br>color_gr…   
                                                                                                                                                                                                   color_gray_luminance<br>color_gray  
                                                                                                                                                                                                   color_gray_luminance<br>color_gray  
                                                                                                                                                                                                   color_gray_luminance<br>color_gray  
                                                                                                                                                                                                   color_gray_luminance                
| color_desaturate     | 0/5 :  0%   | Convert red image to GRAY<br>Convert blue image to GRAY<br>Convert green Image to GRAY<br>Convert white Image to GRAY<br>convert black Image to GRAY      | <br><br><br><br>                   |

# Milestone  transform
Score : 12/15 :  80%
## Detail by Feature
| Feature           | Score       | Missed tests                                                   | Stdout   |
| :---------------- | :---------- | :------------------------------------------------------------- | :------- |
| rotate_cw         | 0/3 :  0%   | rotate square image<br>rotate large image<br>rotate high image | <br><br> |
| rotate_acw        | 3/3 :  100% |                                                                |          |
| mirror_horizontal | 3/3 :  100% |                                                                |          |
| mirror_vertical   | 3/3 :  100% |                                                                |          |
| mirror_total      | 3/3 :  100% |                                                                |          |

# Milestone  resize
Score : 0/60 :  0%
## Detail by Feature
| Feature        | Score      | Missed tests                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           | Stdout                            |
| :------------- | :--------- | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------- |
| scale_nearest  | 0/20 :  0% | scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3                                                                                 | <br><br><br><br><br><br><br><br>… |
| scale_bilinear | 0/20 :  0% | scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12                               | <br><br><br><br><br><br><br><br>… |
| scale_crop     | 0/20 :  0% | scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10 | <br><br><br><br><br><br><br><br>… |

