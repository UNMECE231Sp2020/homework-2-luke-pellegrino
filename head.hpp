#include <iostream>
#include <cmath>

class Complex{
	private:
		double _real;
		double _imag;
	public:
		Complex(); // empty constructor; default constructor with no arguments

		Complex(double x, double y); //default constructor with arguments

		Complex(const Complex &Comp);//Copy constructor		
		
		void print(); //function to print

		Complex add(Complex x); //function to add two complex numbers

		Complex sub(Complex x); //function to subtract two complex numbers


		double get_real() const;  //getter function for the real part of complex

		double get_imag() const; //getter function for the imaginary part of complex

		Complex mult(Complex x); //function to multiply two complex numbers

		Complex divide(Complex x); //funtion to divide two complex numbers
		

		Complex getconj(); //function to get the complex conjugate


		double getmagn(); //function to get the magnitude of the complex number


		double getphase(); //function to get the phase of the complex number

		Complex operator+(Complex Comp);

		Complex operator-(Complex Comp);

		Complex operator*(Complex Comp);
	
		Complex operator/(Complex Comp);		
	
		Complex operator=(Complex Comp);

		bool operator!=(Complex Comp);
		
		bool operator==(Complex Comp);


		friend std::ostream& operator<<(std::ostream &out, const Complex &p); //std output call
	
		friend std::istream& operator>>(std::istream &in, Complex &p); //std input call

};
