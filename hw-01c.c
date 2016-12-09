/* Author: Lucas Myers */
/* Date 12/2/2016 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 4) {
		printf("Format is: initial_velocity, initial_height, initial_angle\n");
		exit(1);
	}
	
	double v0 = atof(argv[1]); // initial velocity
	double h0 = atof(argv[2]); // initial height
	double theta0 = atof(argv[3]); // initial angle
	float g = -9.8; // acceleration due to gravity
	
	double vy0 = v0 * sin(theta0); // y component of initial velocity
	double vx0 = v0 * cos(theta0); // x component of initial velocity
	
	double t_mh = -vy0 / g; // time when object is at max height
	double h_max = h0 + (vy0 * t_mh) + (g / 2) * (t_mh * t_mh); // max height
	
	double t = (-vy0 - sqrt((vy0 * vy0) - (4 * (g / 2) * h0))) / g; // time of flight
	
	double x = vx0 * t; // total distance traveled
	
	double vyf = vy0 + g * t; // final y velocity
	double thetaf = atan(-vyf / vx0); // angle of impact
	
	printf("Max height is: %f\n", h_max);
	printf("Time of flight is: %f\n", t);
	printf("Distance traveled is: %f\n", x);
	printf("Angle of impact is: %f\n", thetaf);
	
	return 0;
}
