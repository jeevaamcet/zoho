public class BankAccount{
    
     int balance = 0;

    void deposit(int money)
    {
        balance += money;
    }
    void withdraw(int money)
    {
        balance -= money;
    }
    void display()
    {
        System.out.println(balance);
    }
}
class SavingsAccount extends BankAccount{

    void withdraw(int money)
    {
        if(balance >100 && balance >= money)
        {
            balance -= money;
        }
        else
        {
            System.out.println("Balance under 100 rs ");
        }
    }
}