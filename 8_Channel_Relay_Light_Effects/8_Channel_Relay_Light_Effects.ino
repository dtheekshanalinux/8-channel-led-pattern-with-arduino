// HAZI TECH
// Program by Hasitha Jayasundara
// Visit my YouTube Channel - http://www.youtube.com/c/HAZITECH?sub_confirmation=1

#include "Arduino.h"

const int CH1 =  13;
const int CH2 =  12;
const int CH3 =  11;
const int CH4 =  10;
const int CH5 =  9;
const int CH6 =  8;
const int CH7 =  7;
const int CH8 =  6;

int SPEED = 250;      //Set your pattern running speed here. Smaller the value, higher the speed. 
                      //WARNING - Very high speeds will reduce your Relays life span

void setup() 
{
pinMode(CH1, OUTPUT);
pinMode(CH2, OUTPUT);
pinMode(CH3, OUTPUT);
pinMode(CH4, OUTPUT);
pinMode(CH5, OUTPUT);
pinMode(CH6, OUTPUT);
pinMode(CH7, OUTPUT);
pinMode(CH8, OUTPUT); 

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 
}

void loop() 
{
//LEFT-RIGHT running pattern
digitalWrite(CH1, LOW);
delay (SPEED);
digitalWrite(CH1, HIGH);
digitalWrite(CH2, LOW);
delay (SPEED);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, LOW);
delay (SPEED);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, LOW);
delay (SPEED);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, LOW);
delay (SPEED);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, LOW);
delay (SPEED);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, LOW);
delay (SPEED);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, LOW);
delay (SPEED);

digitalWrite(CH8, HIGH);
digitalWrite(CH7, LOW);
delay (SPEED);
digitalWrite(CH7, HIGH);
digitalWrite(CH6, LOW);
delay (SPEED);
digitalWrite(CH6, HIGH);
digitalWrite(CH5, LOW);
delay (SPEED);
digitalWrite(CH5, HIGH);
digitalWrite(CH4, LOW);
delay (SPEED);
digitalWrite(CH4, HIGH);
digitalWrite(CH3, LOW);
delay (SPEED);
digitalWrite(CH3, HIGH);
digitalWrite(CH2, LOW);
delay (SPEED);
digitalWrite(CH2, HIGH);
digitalWrite(CH1, LOW);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 

//LEFT-RIGHT filling pattern
digitalWrite(CH1, LOW);
delay (SPEED);
digitalWrite(CH1, HIGH);
digitalWrite(CH2, LOW);
delay (SPEED);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, LOW);
delay (SPEED);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, LOW);
delay (SPEED);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, LOW);
delay (SPEED);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, LOW);
delay (SPEED);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, LOW);
delay (SPEED);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, LOW);
delay (SPEED);

digitalWrite(CH1, LOW);
delay (SPEED);
digitalWrite(CH1, HIGH);
digitalWrite(CH2, LOW);
delay (SPEED);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, LOW);
delay (SPEED);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, LOW);
delay (SPEED);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, LOW);
delay (SPEED);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, LOW);
delay (SPEED);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, LOW);
delay (SPEED);

digitalWrite(CH1, LOW);
delay (SPEED);
digitalWrite(CH1, HIGH);
digitalWrite(CH2, LOW);
delay (SPEED);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, LOW);
delay (SPEED);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, LOW);
delay (SPEED);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, LOW);
delay (SPEED);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, LOW);
delay (SPEED);

digitalWrite(CH1, LOW);
delay (SPEED);
digitalWrite(CH1, HIGH);
digitalWrite(CH2, LOW);
delay (SPEED);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, LOW);
delay (SPEED);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, LOW);
delay (SPEED);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, LOW);
delay (SPEED);

digitalWrite(CH1, LOW);
delay (SPEED);
digitalWrite(CH1, HIGH);
digitalWrite(CH2, LOW);
delay (SPEED);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, LOW);
delay (SPEED);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, LOW);
delay (SPEED);

digitalWrite(CH1, LOW);
delay (SPEED);
digitalWrite(CH1, HIGH);
digitalWrite(CH2, LOW);
delay (SPEED);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, LOW);
delay (SPEED);

digitalWrite(CH1, LOW);
delay (SPEED);
digitalWrite(CH1, HIGH);
digitalWrite(CH2, LOW);
delay (SPEED);

digitalWrite(CH1, LOW);
delay (SPEED);

//RIGHT-LEFT filling remove pattern
digitalWrite(CH8, HIGH);
delay (SPEED);

digitalWrite(CH7, HIGH);
delay (SPEED);
digitalWrite(CH8, LOW);
delay (SPEED);
digitalWrite(CH8, HIGH);
delay (SPEED);

digitalWrite(CH6, HIGH);
delay (SPEED);
digitalWrite(CH7, LOW);
delay (SPEED);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, LOW);
delay (SPEED);
digitalWrite(CH8, HIGH);
delay (SPEED);

digitalWrite(CH5, HIGH);
delay (SPEED);
digitalWrite(CH6, LOW);
delay (SPEED);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, LOW);
delay (SPEED);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, LOW);
delay (SPEED);
digitalWrite(CH8, HIGH);
delay (SPEED);

digitalWrite(CH4, HIGH);
delay (SPEED);
digitalWrite(CH5, LOW);
delay (SPEED);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, LOW);
delay (SPEED);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, LOW);
delay (SPEED);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, LOW);
delay (SPEED);
digitalWrite(CH8, HIGH);
delay (SPEED);

digitalWrite(CH3, HIGH);
delay (SPEED);
digitalWrite(CH4, LOW);
delay (SPEED);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, LOW);
delay (SPEED);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, LOW);
delay (SPEED);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, LOW);
delay (SPEED);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, LOW);
delay (SPEED);
digitalWrite(CH8, HIGH);
delay (SPEED);

digitalWrite(CH2, HIGH);
delay (SPEED);
digitalWrite(CH3, LOW);
delay (SPEED);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, LOW);
delay (SPEED);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, LOW);
delay (SPEED);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, LOW);
delay (SPEED);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, LOW);
delay (SPEED);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, LOW);
delay (SPEED);
digitalWrite(CH8, HIGH);
delay (SPEED);

digitalWrite(CH1, HIGH);
delay (SPEED);
digitalWrite(CH2, LOW);
delay (SPEED);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, LOW);
delay (SPEED);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, LOW);
delay (SPEED);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, LOW);
delay (SPEED);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, LOW);
delay (SPEED);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, LOW);
delay (SPEED);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, LOW);
delay (SPEED);
digitalWrite(CH8, HIGH);
delay (SPEED);

//EDGE-MIDDLE running pattern
digitalWrite(CH1, LOW);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, LOW);
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, LOW);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, LOW);
digitalWrite(CH8, HIGH);
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, LOW);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, LOW);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH);
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, LOW);
digitalWrite(CH5, LOW);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH);
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, LOW);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, LOW);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH);
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, LOW);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, LOW);
digitalWrite(CH8, HIGH);
delay (SPEED);

digitalWrite(CH1, LOW);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, LOW);
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH);

//EDGE-MIDDLE filling pattern
digitalWrite(CH1, LOW);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, LOW);
delay (SPEED);

digitalWrite(CH1, LOW);
digitalWrite(CH2, LOW);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, LOW);
digitalWrite(CH8, LOW);
delay (SPEED);

digitalWrite(CH1, LOW);
digitalWrite(CH2, LOW);
digitalWrite(CH3, LOW);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, LOW);
digitalWrite(CH7, LOW);
digitalWrite(CH8, LOW);
delay (SPEED);

digitalWrite(CH1, LOW);
digitalWrite(CH2, LOW);
digitalWrite(CH3, LOW);
digitalWrite(CH4, LOW);
digitalWrite(CH5, LOW);
digitalWrite(CH6, LOW);
digitalWrite(CH7, LOW);
digitalWrite(CH8, LOW);
delay (SPEED);

digitalWrite(CH1, LOW);
digitalWrite(CH2, LOW);
digitalWrite(CH3, LOW);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, LOW);
digitalWrite(CH7, LOW);
digitalWrite(CH8, LOW);
delay (SPEED);

digitalWrite(CH1, LOW);
digitalWrite(CH2, LOW);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, LOW);
digitalWrite(CH8, LOW);
delay (SPEED);

digitalWrite(CH1, LOW);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, LOW);
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 
delay (SPEED);

digitalWrite(CH1, LOW);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, LOW);
delay (SPEED);

digitalWrite(CH1, LOW);
digitalWrite(CH2, LOW);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, LOW);
digitalWrite(CH8, LOW);
delay (SPEED);

digitalWrite(CH1, LOW);
digitalWrite(CH2, LOW);
digitalWrite(CH3, LOW);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, LOW);
digitalWrite(CH7, LOW);
digitalWrite(CH8, LOW);
delay (SPEED);

digitalWrite(CH1, LOW);
digitalWrite(CH2, LOW);
digitalWrite(CH3, LOW);
digitalWrite(CH4, LOW);
digitalWrite(CH5, LOW);
digitalWrite(CH6, LOW);
digitalWrite(CH7, LOW);
digitalWrite(CH8, LOW);
delay (SPEED);

//TWO WAY pattern
digitalWrite(CH1, LOW);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, LOW);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, LOW);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, LOW);
digitalWrite(CH8, HIGH);
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, LOW);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, LOW);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, LOW);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, LOW);
delay (SPEED);

digitalWrite(CH1, LOW);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, LOW);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, LOW);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, LOW);
digitalWrite(CH8, HIGH);
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, LOW);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, LOW);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, LOW);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, LOW);
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 

//THREE BLOCK RUNNING pattern
digitalWrite(CH1, LOW);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 
delay (SPEED);

digitalWrite(CH1, LOW);
digitalWrite(CH2, LOW);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 
delay (SPEED);

digitalWrite(CH1, LOW);
digitalWrite(CH2, LOW);
digitalWrite(CH3, LOW);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, LOW);
digitalWrite(CH3, LOW);
digitalWrite(CH4, LOW);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, LOW);
digitalWrite(CH4, LOW);
digitalWrite(CH5, LOW);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, LOW);
digitalWrite(CH5, LOW);
digitalWrite(CH6, LOW);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, LOW);
digitalWrite(CH6, LOW);
digitalWrite(CH7, LOW);
digitalWrite(CH8, HIGH); 
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, LOW);
digitalWrite(CH7, LOW);
digitalWrite(CH8, LOW); 
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, LOW);
digitalWrite(CH8, LOW); 
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, LOW); 
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, LOW); 
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, LOW);
digitalWrite(CH8, LOW); 
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, LOW);
digitalWrite(CH7, LOW);
digitalWrite(CH8, LOW); 
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, LOW);
digitalWrite(CH6, LOW);
digitalWrite(CH7, LOW);
digitalWrite(CH8, HIGH); 
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, LOW);
digitalWrite(CH5, LOW);
digitalWrite(CH6, LOW);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, LOW);
digitalWrite(CH4, LOW);
digitalWrite(CH5, LOW);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, LOW);
digitalWrite(CH3, LOW);
digitalWrite(CH4, LOW);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 
delay (SPEED);

digitalWrite(CH1, LOW);
digitalWrite(CH2, LOW);
digitalWrite(CH3, LOW);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 
delay (SPEED);

digitalWrite(CH1, LOW);
digitalWrite(CH2, LOW);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 
delay (SPEED);

digitalWrite(CH1, LOW);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 
delay (SPEED);

digitalWrite(CH1, HIGH);
digitalWrite(CH2, HIGH);
digitalWrite(CH3, HIGH);
digitalWrite(CH4, HIGH);
digitalWrite(CH5, HIGH);
digitalWrite(CH6, HIGH);
digitalWrite(CH7, HIGH);
digitalWrite(CH8, HIGH); 
delay (SPEED);
}
