/*
*  AUTHORS:          David Stanley (davidms4@illinois.edu)
*  DATE WRITTEN:     Feb 2022
*  LAST MODIFIED:    Feb 2022
*  AFFILIATION:      Department of Aerospace Engineering, University of Illinois Urbana-Champaign
*  DESCRIPTION:      Orbit class for storing orbit properties and solution
*  REFERENCE:        Woollands, R., and Junkins, J., "Nonlinear Differential Equation Solvers
*                    via Adaptive Picard-Chebyshev Iteration: Applications in Astrodynamics", JGCD, 2016.
*/


#ifndef ORBIT_H
#define ORBIT_H

#include <vector>


class Orbit
{
    private:
        std::vector<std::vector<double> > Soln;
        struct SatProperties{
            double Area;
            double Reflectance;
            double Mass;
            double Cd;
        };
        
    public:
        bool Compute_Drag;
        bool Compute_SRP;
        bool Compute_Third_Body;
        bool suborbital;
        //Constructors
        Orbit(std::vector<std::vector<double > > Solution);
        Orbit(double area, double reflectivity, double mass, double Cd, bool compute_drag, bool compute_SRP, bool compute_third_body);
        //Setters
        void SetSolution(std::vector<std::vector<double > > Solution);
        void SetProperties(double area, double reflectance, double mass, double Cd, bool compute_drag, bool compute_SRP, bool compute_third_body);
        void SetSubOrbital();
        //Getters
        std::vector<double> getTimes(){return Soln[0];};
        std::vector<double> getPositionX(){return Soln[1];};
        std::vector<double> getPositionY(){return Soln[2];};
        std::vector<double> getPositionZ(){return Soln[3];};
        std::vector<double> getVelocityX(){return Soln[4];};
        std::vector<double> getVelocityY(){return Soln[5];};
        std::vector<double> getVelocityZ(){return Soln[6];};
        double GetMass(){return satproperties.Mass;};
        double GetArea(){return satproperties.Area;};
        double GetDragCoefficient(){return satproperties.Cd;};
        double GetReflectance(){return satproperties.Reflectance;};
        //Internal properties struct declaration
        struct SatProperties satproperties;
};



#endif
