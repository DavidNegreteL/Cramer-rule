#include<stdio.h>
#include<iostream>
#include<math.h>
#include <iostream> 
using namespace std; 
void function1(double[][3], double[]); 
void function2(double[][3], double[]); 
int main() 

{ 
	char d; 
	double a[3][3]; 
	double b[3]; 
	int n=0; 
	cout << " Cuantas ecuaciones son en el sistema? "; 
	while (n != 2 && n != 3) 
	{ 
	cin >>n; 
	switch (n) 
	{ 
	case 2: cout << "a11x1 + a12x2 = b1"<<endl;
		cout << "a21x1 + a22x2 = b2"<<endl; 
			break; 
	case 3: cout << "a11x1 + a12x2 + a13x3 = b1"<<endl; 
			cout << "a21x1 + a22x2 + a23x3 = b2"<<endl; 
			cout << "a31x1 + a32x2 + a33x3 = b3"<<endl; 
			break; 
	default: cout << "Solo puedo calcular sistemas de 2 o 3 ecuaciones:" ; 
			break; 
	} 
	}
	for (int i=0; i<n; i++) 
	{ 
		for (int j=0; j<n; j++) 
		{ 
			cout << "DIgita a[" << i +1 << "][" << j+1 << "]:"; 
			cin >> a[i][j]; 
		} 
	} 
	 	for (int j=0; j<n ; j++) 
		{ 
			cout << "Digita b[" << j+1<<"]:"; 
			cin >> b[j]; 
		} 
	 switch (n) 
	{ 
	case 2: function1(a,b); 
		break; 
	case 3: function2(a,b); 
		break; 
	} 
	cin>>d; 
	return 0; 
} 
	void function1(double a[3][3], double b[3]) 
{ 
	double var; 
	double x1; 
	double x2;
     
	var =(a[0][0] * a[1][1] - a[0][1] * a[1][0]); 
	if (var != 0) 
	{ 
		x1= (b[0] * a[1][1] - b[1] * a[0][1])/var; 
		x2= (b[1] * a[0][0] - b[0] * a[1][0])/var; 
		cout << "X1 =" << x1<<endl; 
		cout << "X2 =" << x2; 
	} 
	else 
	cout << "Error"; 
	return; 
}
void function2(double a[3][3], double b[3]) 
{ 
	double var; 
	double x1; 
	double x2; 
	double x3; 
	var = (a[0][0] * a[1][1] * a[2][2] + a[0][1] * a[1][2] * a[2][0] + a[1][0] * a[2][1] * a[0][2]) - 
		(a[2][0] * a[1][1] * a[0][2] + a[1][0] * a[0][1] * a[2][2] + a[2][1] * a[1][2] *a[0][0]); 
	if (var != 0) 
	{ 
		x1= ((b[0] * a[1][1] * a[2][2] + a[0][1] * a[1][2] * b[2] + b[1] * a[2][1] * a [0][2]) - 
			(b[2] * a[1][1] * a[0][2] + b[1] * a[0][1]*a[2][2]+a[2][1]*a[1][2]*b[0]))/var; 
		x2= ((b[1] * a[0][0] * a[2][2] + a[1][2] * a[2][0] * b[0] + b[2] * a[1][0] * a [0][2]) - 
			(b[1] * a[2][0] * a[0][2] + b[2] * a[1][2]*a[0][0]+a[1][0]*a[2][2]*b[0]))/var; 
		x3= ((b[2] * a[0][0] * a[1][1] + a[0][1] * a[2][0] * b[1] + b[0] * a[1][0] * a [2][1]) - 
			(b[0] * a[2][0] * a[1][1] + b[1] * a[2][1]*a[0][0]+a[1][0]*a[0][1]*b[2]))/var; 
		cout << "X1 =" << x1<<endl;
		cout << "X2 =" << x2<<endl;
		cout << "X3 =" << x3<<endl;   
	} 
	else 
	cout << "Error";  
	system("PAUSE");
}
