#include <Arduino.h>
#include <math.h>
#include <stdio.h>
#include "arm_math.h"

// constants
#define SAMPLE_RATE       16000
#define FFT_SIZE          256
#define INPUT_BUFFER_SIZE 64
#define INPUT_SHIFT       2

#define FFT_BINS_SKIP     5
#define FFT_MAG_MAX       2000.0

q15_t capture_buffer_q15[INPUT_BUFFER_SIZE];
volatile int new_samples_captured = 0;

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}