
#ifndef ADDITION_H
#define ADDITION_H

#include <stdexcept>
#include <string>
#include <regex>

/*
	have this extend a framework adt

	change to protected 
	allow for extensions
	to implement more efficient 
	string multiplications
*/

class BigInt{
	std::string integer;
	long long int regInt;
public:
	BigInt();
	BigInt(long long int n);
	BigInt(std::string n);
	void add(std::string integerTwo);
	void multiply(std::string integerTwo);
	void divide(std::string integerTwo);
	void subtract(std::string integerTwo);
	void convert(long long int n);
	bool isnumber(std::string n);
	std::string getInt();
};

BigInt::BigInt(){
	integer="0";
}

BigInt::BigInt(long long int n){
	convert(n);
}

BigInt::BigInt(std::string n){
	if(!isnumber(n))
		throw std::runtime_error("Not an Integer");

	integer=n;
}

#include <iostream>

bool BigInt::isnumber(std::string n){
	return(std::regex_match (n, std::regex("^(0?[1-9]*|-{0,1}[1-9][0-9]*)"))?true:false);
}

void BigInt::convert(long long int n){
	integer="";

	if(n<0){
		integer+="-";
		n=0-n;
	}else if(!n){
		integer="0";
	}
	
	while(n){
		integer+=(n%10)+48;
		n/=10;
	}
}

void BigInt::add(std::string integerTwo){
	char num;
	bool hold=false;
	int i=integer.length(), j=integerTwo.length();

	//fix for negative numbers!
	for(; i>=0&&j>=0; i--, j--){
		num=integer[i]+integerTwo[j];
		
		if(hold){
			hold=false;
			num++;
		}
		if(num>'9'){
			hold=true;
			num-=':';
		}

		integer[i]=num;
	}

	while(j&&hold){
		num=integerTwo[j]+'1';
		if(num<'9')
			hold=false;
		integer=num+integer;
	}if(j){
		integer=integerTwo.substr(0, j+1)+integer;
	}

	while(i&&hold){
		num=integer[i]+'1';
		if(num<'9')
			hold=false;
		integer[i--]=num;
	}

	if(hold){
		integer="1"+integer;
	}
}

void BigInt::multiply(std::string integerTwo){

}

void BigInt::divide(std::string integerTwo){

}

void BigInt::subtract(std::string integerTwo){

}

std::string BigInt::getInt(){
	return integer;
}

#endif