/*
  * This is Justin Ritchey's source code for Machine learning Problem 1 for Intro to C++ , second attempt on6/6/2020
  * Ask for length in cm, print out length in meters, Area of Sqaure, Area of Circle, how much bigger the area of the square is
  * Print out, cube volume rounded down and roudned up
  */
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    double number1 = 0;             //Number to be entered by user
    double number2 = 0;             //Entered number in meters
    int number3 = 0;                //Rounded up length in cm
    int number4 = 0;                //Roduned down length in cm
    double square = 0;              //Area of sqaure
    double circle = 0;              //Area of the circle
    double difference = 0;          //Difference between Sqaure and Circle area
    int cube = 0;                   //Cube rounded up value
    int cube1 = 0;                  //Cube rounded down value
    double radius = 0;              //Get the radius from the users given diameter
    const double PI = 3.14159;      //The value of PI

   //Introduction
    cout << "Geometry formulas by Justin Ritchey\n";

    //prompt user for length
	cout << "Enter one floating point number for length: ";
    cin >> number1;

    //Computing geomtry 
    number2 = number1 / 100;                           //Cm to meters is cm divded by 100
    square = number2 * number2;                        //Area of a sqaure is length sqaured
    radius = number2 / 2;                              //Radius is diameter/legnth divded by 2
    circle = PI * radius * radius;                     //Area of a circle is PI * Radius Sqaured
    difference = square - circle;                      //Difference in area is area of a sqaure minus area of a circle
    number3 = ceil(number1);                           //Length rounded up in cm
    number4 = floor(number1);                          //Length rounded down in cm
    cube = (number3 * number3 * number3) / 1000000;    //Volume of a cube rounded up in cubic meters
    cube1 = (number4 * number4 * number4) / 1000000;   //Volume of cube rounded down in cubic meters

    //Outputs
    cout << "\nThe number you entered is " << number1 << " cm or " << number2 << " m.\n";     //Print out length user entered in both meters and centimeters
    cout << "Area of the square is " << square << " sq. m.\n";                                //Print out area of the sqaure
    cout << "Area of the circle is " << circle << " sq. m.\n";                                //Print out area of the circle
    cout << "Difference is " << difference << " sq. m.\n\n";                                  //Print out differnce between sqaure and cirles area

    cout << "Cube volume rounded down is " << cube1 << " cu. m.\n";                           //Print out cube volume roudned down
    cout << "Cube volume rounded up is " << cube << " cu. m.\n";                              //Print out cube volume rounded up


    system("pause");
    return 0;
}