/*26. 4.36 (Modified Account 3.9) to represent the Also, display all balance 
double the decimal point. Class) Modify class Account data member as type 
(Exercise double . amounts with two digits to the right of(c++ how to program)*/

#include <iostream>
#include<iomanip>
#include "Modified-Account-Class.h"
using namespace std ;

int main () {

    account account1 ("Gane Green " , 50 ) ;
    account account2 ("John blue" , -7) ;
    cout << setprecision(2)<<fixed ;
    cout << account1.getName() << account1.getBalance()<< endl ;
    cout << " please enter withdraw amount : "  ;
    double withdrawAmount (0) , depositeAmount(0) ;
    cin >> withdrawAmount ;
    if(withdrawAmount>account1.getBalance()){      // to make sure the withdraw amount does not exceed the balance 
    cout << " Withdrawal amount exceeded account balance.\n" ;
    }
    if (withdrawAmount<=account1.getBalance()){   // to make sure the withdraw amount does not exceed the balance 
    account1.withdraw(withdrawAmount) ;
    }
    cout << account1.getName() << account1.getBalance()<< endl ;
    cout << " please enter deposite amount : " ;
    cin >> depositeAmount ;
    account1.deposite( depositeAmount ) ;
    cout << account1.getName() << account1.getBalance()<< endl ;




}