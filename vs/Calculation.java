public class Calculation
{
    public int addition(int a, int b)
    {
        return a + b;
    }

    public int subtraction(int a, int b)
    {
        return a - b;
    }

    public int product(int a, int b)
    {
        return a * b;
    }
    public double division(int a, int b)
    {
        try
        {
            return a / b;
        }
        catch(ArithmeticException e)
        {
            System.out.println("Only non zero value in divisor is permitted \n");
        }

        return 0;
        
    }
}