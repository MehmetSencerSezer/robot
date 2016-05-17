#include "myalgo.h"
#include <cstdlib>
#include<iostream>
using namespace std;
int Kp=1;
int Kd=1;
int Ki=1;
   // Target – It is the position you want the line follower to always be(or try to be),that is, the center of the robot.
    // Current Position – It is the current position of the robot with respect to the line.
    // Error - It is the difference between the current position and the target. It can be negative, positive or zero.
    // Proportional – It tells us how far the robot is from the line like – to the right , to the extreme right, to the left or a little to the left. Proportional is the fundamental term used to calculate the other two.
    // Integral – It gives the accumulated error over time. It tells us if the robot has been on the line in the last few moments or not. 
    // Derivative – It is the rate at which the robot oscillates to the left and right about the line.

   // unsigned short error = target_pos – S;       //calculate error
    // P=Error * Kp                       //error times proportional constant gives P
    // I=I + Error                         //integral stores the accumulated error
    // I=I * Ki                             //calculates the integral value
    // D=Error – Previos_error       //stores change in error to derivate
    // Correction=P + I + D
bool Algo1(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
   *VL = 5;
*VR = 5;
}

bool Algo2(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{ // Robot sadece düz gidecek. Sensör kontrolü yok.

 short last_proportional=0,integral=0,power_difference=0,pozisyon=0,Mpos=0;
	int E=0b000001111100000-S;
   	 double Kp=0.00001,Kd=0.001;
   double Ki=0.001;
 	short proportional=E;
 	short derivative=(proportional-last_proportional);
   	last_proportional=derivative;
   integral=integral+proportional*Ki;
	double sonuc=proportional*Kp+derivative*Kd+integral*Ki;
	if(S==16382 ||S== 32767  ||S==8188  || S== 4088  ||S== 2032  ||S== 992){
	* VL=50; * VR = 50;
	}
	else{
			if(sonuc>0){//Sağa Dönecek
			sonuc = sonuc *2+ 2;
			* VR=64/sonuc; * VL = 50;
						}
									
	if(sonuc<0){//Sola Dönecek
	int bayrak=8928;
	int bayrak2=32;
	int bayrak3=50;
	if(sonuc<0){
	sonuc=sonuc*-1;
			}
	sonuc = sonuc *2+ 2;
* VR=64/sonuc; * VL = 50;


				}
		}
			
			
		return true;
}
bool Algo3(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
return Algo1(S, L, R, Init, VL, VR);
}
bool Algo4(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
return Algo1(S, L, R, Init, VL, VR);
}
bool Algo5(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
return Algo1(S, L, R, Init, VL, VR);
}
bool Algo6(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
return Algo1(S, L, R, Init, VL, VR);
}
bool Algo7(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
return Algo1(S, L, R, Init, VL, VR);
}
