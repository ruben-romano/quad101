#ifndef PARAMS_H
#define PARAMS_H

/*-----------------------------------------------------------------------*/
  //Global constants
  #define SAMPLE_RATE 5     //update Frequency for sensors and Rotors
  #define SAMPLE_RATE1 4000 //update Frequency for new controller value

/*-----------------------------------------------------------------------*/
  //PID constants
  #define MAX_E_FOR_I 45    //Maximum angle to contribute to I_Controller
  #define MIN_E_FOR_I 0.5   //Minimum angle to start controller

/*-----------------------------------------------------------------------*/
  //Rotorcontrol constants
  #define PWMOUT1 6         //define Output Pins for ESCs
  #define PWMOUT2 3
  #define MAX_ROTOR_SIGNAL 98 //156 max and until 145  you haveincrease in F
  #define MIN_ROTOR_SIGNAL 48
  #define TAKE_OFF_SIGNAL  73

/*-----------------------------------------------------------------------*/
  //Sensor constants
  #define COMPLEMENTARY_WEIGHT 0.98
  #define GYRORANGE 2
  #define MAG_PLUGGED_IN TRUE
  #define DECLINATION_ANGLE_DEGREE 2.1664

#endif
