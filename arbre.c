#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "rover.h"

float coef_reduction_freq=0.2;
float coef_augmentation_freq=1.3;

float coef_reduction_speed=0.5;
float coef_augmentation_speed=1.5;

float convert_ms_to_kmh(float speed){
	return speed*3.6;
}

float convert_kmh_to_ms(float speed){
	return speed/3.6;
}
