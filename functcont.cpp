#include <iostream>
#include "head.hpp"



/*Default constructor with no arguments*/
Complex::Complex(){

	_real = 6.0;
	_imag = 6.1;
}



/*Default constructor with arguments*/
Complex::Complex(double x, double y){ 

	   _real =  x;
	   _imag =  y;
}



/*Function to Print*/
void Complex::print(){

	if( _imag >=0){
		std::cout << " " << _real<< "+ "  << _imag<<std::endl;
	}
	else {
		std::cout << " "<< _real<< "- " << _imag<<std::endl;
	}
	
	if ( _imag == 0){
		std::cout << " "<< _real <<std::endl;
	}
}


/*Getter funtion for the real part of complex*/
double Complex::get_real() const{
	return _real;
}



/*Getter funtion for the imaginary part of complex*/
double Complex::get_imag() const{
	return _imag;
}



/*Function to add two complex numbers*/
Complex Complex::add(Complex x, Complex y){
	Complex Temp;

	Temp._real=x._real+y._real;
	Temp._imag=x._imag+y._imag;

	return Temp;
}



/*Function to subtract two complex numbers*/
Complex Complex::sub(Complex x, Complex y){
	Complex Blemp;

	Blemp._real=x._real - y._real;
	Blemp._imag=x._imag - y._imag;

	return Blemp;
}



/*Function to multiply two complex numbers*/
Complex Complex::mult(Complex x, Complex y){
	Complex Flemp;

	Flemp._real = x._real * y._real -  x._imag * y._imag;
	Flemp._imag = x._real * y._imag + x._imag * y._real;

	return Flemp;
}


/*Function to divide two complex numbers*/
Complex Complex::divide(Complex x, Complex y){
	double denom = getmagn(y) * getmagn(y);

	if (denom ==0){
		denom = 1;
	}
	
	Complex Kremp = mult(x, getconj(y));
	Kremp._real /= denom;
	Kremp._imag /= denom;

	return Kremp;	
}	



/*Function to get the complex conjugate*/
Complex Complex::getconj(Complex p){
       p._imag *= -1;
	return p;
}



/*Function to get the magnitude of the complex number*/
double Complex::getmagn(Complex p){
 	return sqrt((p._real * p._real) + (p._imag * p._imag));	
}


/*Function to get the phase of the complex number*/
double Complex::getphase(Complex p){
	double ph = atan( p._imag / p._real);
	ph = ph * (180/M_PI);
	return (ph<0) ? -ph : ph;
}

~
~                                                                                                                                                                                                    
~                                                                                                                                                                                                    
~                                                                                                                                                                                                    
~                                                                                                                                                                                                    
                                                                                                                                                       
~                                                                                                                                                                                                    
~                                                                                                                                                                                                    
~                                                                                                                                                                                                    
~                                                                                                                                                                                                    
~                                                                                                                                                                                                    
~                                                                                                                                                           
