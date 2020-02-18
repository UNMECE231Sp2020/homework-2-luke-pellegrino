#include <iostream>
#include <cmath>

class Complex{
	private:
		double _real;
		double _imag;
	public:
		Complex(); //default consturctor with no arguments

		Complex(double x, double y); //default constructor with arguments		
		
		void print(); //function to print

		Complex add(Complex x, Complex y); //function to add two complex numbers

		Complex sub(Complex x, Complex y); //function to subtract two complex numbers


		double get_real() const;  //getter function for the real part of complex

		double get_imag() const; //getter function for the imaginary part of complex

		Complex mult(Complex x, Complex y); //function to multiply two complex numbers

		Complex divide(Complex x, Complex y); //funtion to divide two complex numbers
		

		Complex getconj(Complex p); //function to get the complex conjugate


		double getmagn(Complex p); //function to get the magnitude of the complex number


		double getphase(Complex p); //function to get the phase of the complex number

};
