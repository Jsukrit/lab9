#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double loan,rate,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	
	cout << "\n";
	int i = 1 ;
	double prev,inr,total,payment,newba;
	newba = loan;
	payment = pay;
//	total = loan+(loan*(rate/100));
//	newba = (loan+(loan*(rate/100)))-pay;

do{	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	prev = newba;
	inr = prev*(rate/100);
	total = prev + inr ;
	if(total < payment){
	    payment = total;
	}
	newba = total - payment ;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << prev;
	cout << setw(13) << left << inr;
	cout << setw(13) << left << total;
	cout << setw(13) << left << payment;
	cout << setw(13) << left << newba;
	cout << "\n";
	i++;
}while( newba != 0);
	cout << "hahahah";
	return 0;
}
