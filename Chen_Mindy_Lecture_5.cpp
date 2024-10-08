//Mindy Chen
//Lecture 5
//10.7.24

#include <iostream> 
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    double money;
    int transaction;
    double debit = 0;
    double credit = 0;
    double transAmount;
    string type;
    char i = 1;

    //set variable type and inital values

    cout << "How much money is in your bank account?" <<endl;
    cin >> money;

    cout << "How many transactions did you do that day?" <<endl;
    cin >> transaction;

    //Asks for money and amount of transactions

    for ( i = 1; i <= transaction; i++ )

    //Loops the code until it reaches the transaction amount

{  
        cout << "What is your transaction type? (debit or credit)" <<endl;
        cin >> type;
        cout << "How much is your transaction?" <<endl;
        cin >> transAmount;

    //Asks for type of transaction and transaction amount

   if (type == "debit")
   {
        debit = money - transAmount;
        money = debit;
        cout << "Your total debit is " << fixed << setprecision(2) << debit <<endl;
   }
    
    //If the transaction is debit, it subtracts the transaction amount from the total money and sets that amount equal to money and debit. Outputs the debit to 2 decimals

   if (type == "credit")
   { 
        credit = money + transAmount;
        money = credit;
        cout << "Your total credit is " << fixed << setprecision(2) << credit <<endl;
   }

   //If the transaction is credit, it adds the transaction amount from the total money and sets that amount equal to money and credit. Outputs the credit to 2 decimals
}

    cout << "Your total debit for the day is: " << fixed << setprecision(2) << debit <<endl;
    cout << "Your total credit for the day is: " << fixed << setprecision(2) << credit <<endl;

    //Outputs the total credit and debit of all the interactions combined to 2 decimal places
    
    return 0;
}

/*How much money is in your bank account?
100
How many transactions did you do that day?
4
What is your transaction type? (debit or credit)
debit
How much is your transaction?
80
Your total debit is 20.00
What is your transaction type? (debit or credit)
debit
How much is your transaction?
20
Your total debit is 0.00
What is your transaction type? (debit or credit)
credit
How much is your transaction?
45.7876
Your total credit is 45.79
What is your transaction type? (debit or credit)
credit
How much is your transaction?
8773
Your total credit is 8818.79
Your total debit for the day is: 0.00
Your total credit for the day is: 8818.79*/