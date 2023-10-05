import java.util.Scanner;

public class Calculator
{
    public static void main(String []args)
    {
        Calculation calc = new Calculation();
        Scanner in = new Scanner(System.in);
        char c;

        do{
            System.out.println("Enter the number 1 :");
            int num1 = in.nextInt();
            System.out.println("Enter the number 2 :");
            int num2 = in.nextInt();

            System.out.println("Enter the symbol to do operation + - *  /  : ");
            char choice = in.next().charAt(0);

            switch(choice)
            {
                case '+' :
                {
                    System.out.println("The addition of two numbers is : "+calc.addition(num1,num2));
                    break;
                }
                case '-':
                {
                    System.out.println("The subtraction of two numbers is : "+calc.subtraction(num1,num2));
                    break;
                }
                case '*':
                {
                    System.out.println("The product of two numbers is : "+calc.product(num1,num2));
                    break;
                }
                case '/':
                {
                    System.out.println("The division of two numbers is : "+calc.division(num1,num2));
                    break;
                }
                default:
                {
                    break;
                }
            }
            System.out.println("Can u again use calculator ? press y :");
            c = in.next().charAt(0);
        
        }while(c == 'y' || c == 'Y');
    }
}