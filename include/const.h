/* const.h
AUTHOR:           Robyn Woollands (robyn.woollands@gmail.com)
DATE WRITTEN:     May 2016
DATE MODIFIED:    February 2022
AFFILIATION:      Department of Aerospace Engineering, Texas A & M University, College Station, TX
DESCRIPTION:      Constants
*/
#ifndef _CONSTANTS_
#define _CONSTANTS_
#define C_PI 3.1415926535897932      // Pi
#define C_MU 3.986004418e5           // Gravitational Constant of the Earth [km^3/s^2]
#define C_MUSun 1.32712440018e11     // Gravitational Constant of the Sun [km^3/s^2]
#define C_MUMoon 4.9048695e3         //Gravitational Constant of the Moon [km^3/s^2]
#define C_MUEarth C_MU
#define C_MUCan 1                    // Gravitational Constant Canonical Units
#define C_omega 7292115.0e-011       // Angular Speed of Earth [rad/s]
#define C_Req 6378.137               // Equatorial Radius of Earth [km]
#define C_ckm 299792.458             // Speed of Light (km/s)
#define C_Gsc 1362                   // Solar constant (W/m^2 or kg/s^3)
#define DU C_Req
#define TU sqrt(pow(DU,3)/C_MU)


#endif
