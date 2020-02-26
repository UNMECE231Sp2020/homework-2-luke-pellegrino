#include <iostream>
#include "head.hpp"

/*
class Complex{
	private:
		double _real;
		double _imag;
	public:

		*/
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


/*Copy Constructor*/
Complex::Complex( const Complex &Comp){
	_real=Comp._real;
	_imag=Comp._imag;
}

/*Function to Print*/
void Complex::print(){

	if( _imag >=0){
		std::cout << " " << _real<< " + "  << _imag<<std::endl;
	}
	else {
		std::cout << " "<< _real<< " - " << -_imag<<std::endl;
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
Complex Complex::add(Complex x){
	Complex Temp;

	Temp._real=x._real+_real;
	Temp._imag=x._imag+_imag;

	return Temp;
}



/*Function to subtract two complex numbers*/
Complex Complex::sub(Complex x){
	Complex Blemp;

	Blemp._real=_real -x._real;
	Blemp._imag=_imag -x._imag;

	return Blemp;
}



/*Function to multiply two complex numbers*/
Complex Complex::mult(Complex x){
	Complex Flemp;

	Flemp._real = x._real *_real -  x._imag *_imag;
	Flemp._imag = x._real *_imag + x._imag *_real;

	return Flemp;
}


/*Function to divide two complex numbers*/
Complex Complex::divide(Complex x){
	double denom = x.getmagn() * x.getmagn();

	if (denom ==0){
		denom = 1;
	}
	
	Complex Kremp = mult(x.getconj());
	Kremp._real /= denom;
	Kremp._imag /= denom;

	return Kremp;	
}	



/*Function to get the complex conjugate*/
Complex Complex::getconj(){
       	Complex p(*this);
	p._imag *= -1;
	return p;
}



/*Function to get the magnitude of the complex number*/
double Complex::getmagn(){
 	return sqrt((_real * _real) + (_imag * _imag));	
}


/*Function to get the phase of the complex number*/
double Complex::getphase(){
	double ph = atan(_imag /_real);
	ph = ph * (180/M_PI);
	return (ph<0) ? -ph : ph;
}


/*Overload Operator: addition*/
Complex Complex::operator+(Complex Comp){
	Complex temp(add(Comp));
	return temp;
}

/*Overload Operator: Subtraction*/
Complex Complex::operator-(Complex Comp){
	Complex temp(sub(Comp));
	return temp;
}

/*Overload Operator: Multiplication*/
Complex Complex::operator*(Complex Comp){
	Complex temp(mult(Comp));

	return temp;
}

/*Overload Operator:Division*/
Complex Complex::operator/(Complex Comp){
	Complex temp(divide(Comp));
		
	return temp;
}

/*Overload Operator: equal*/
Complex Complex::operator=(Complex Comp){
	_real = Comp._real;
	_imag = Comp._imag;

	return *this;
}

/*Overload Operator: does not equal*/
bool Complex::operator!=(Complex Comp){
	return( (_real != Comp._real) && \
			(_imag != Comp._imag));
	}

/*Overload Operator: Equals Equals*/
bool Complex:: operator==(Complex Comp){
	return ( ( _real == Comp._real) &&
			(_imag == Comp._imag));
	}
/*Overload Operator: ostream*/
std::ostream& operator<<(std::ostream &out, const Complex &p) {
	out << p._real << " " << p._imag;
	return out;
}

/*Overload Operator: istream*/
std::istream& operator>>(std::istream &in, Complex &p){
	in >> p._real >> p._imag;
	return in;
}

                                                                                                                                                                                                    
                                                                                                                                                                                                    
                                                                                                                                                                                                  
                                                                                                                                                                                                    
                                                                                                                                                      
                                                                                                                                                                                                    
                                                                                                                                                                                                    
                                                                                                                                                                                                    
                                                                                                                                                                                                    
                                                                                                                                                                                                   
                                                                                                                                                         
