/* Declare a structure to represent a complex number (a number having a real part and
imaginary part). Write C++ functions to add, subtract, multiply and divide two complex
numbers.
C3.real=C1.real+c2.real
C3.img=c1.img+c2.img
 */
#include<iostream>
#include<math.h>
using namespace std;

struct comp_number {
 float real;
 float img;
}num1,num2;

void summ(comp_number num1, comp_number num2){  
    comp_number sum;
    sum.real= num1.real + num2.real;
    sum.img = num1.img + num2.img;
    cout<<"The Sum of two complex number is: ";
    printf("%.2f +%.2fi\n",sum.real,sum.img);
    
}

void subtract(comp_number num1, comp_number num2){  
    comp_number sub;
    sub.real= num1.real - num2.real;
    sub.img = num1.img - num2.img;
    cout<<"The Subtract of two complex number is: ";
    printf("%.2f +%.2fi\n",sub.real,sub.img);    
}

void multiply(comp_number num1, comp_number num2){  
    comp_number mult;
    mult.real= num1.real * num2.real - num1.img * num2.img;
    mult.img = num1.real * num2.img + num2.real * num1.img;
    cout<<"The multiply of two complex number is: ";
    printf("%.2f +%.2fi\n",mult.real,mult.img);  
}

void divide(comp_number num1, comp_number num2){  
 
  float common_div= (pow(num2.real,2)) + (pow(num2.img,2));

  float realm = (num1.real*num2.real);
  float imgi = (num1.img * num2.img);

  float result1 = realm + imgi;
  float result2 = (num1.img * num2.real) - (num1.real*num2.img);

  cout<<"The Division of two complex number is: ";
  printf("%.2f +%.2fi\n",(result1/common_div),(result2/common_div));
}


int main(){

      cout<<"Enter 1st real number: ";
    	cin>>num1.real; 

    	cout<<"Enter 1st imaginario number: ";
    	cin>>(num1.img);

   	  cout<<"Enter 2cnd real number:  ";
    	cin>>num2.real;
    		
      cout<<"Enter 2nd imaginario number: ";
   	  cin>>num2.img;

      summ(num1,num2);
      subtract(num1,num2);
      multiply(num1,num2);
      divide(num1,num2);

  
return 0;
  
}





