import java.util.HashMap;
import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        HashMap<Integer,Payroll> hp = new HashMap<>();
        Scanner input = new Scanner(System.in);
       while(true)
       {
           System.out.println("Enter your choice : ");
           System.out.println("1.Add details ");
           System.out.println("2.display details ");
           System.out.println("3.exit ");
           int choice = Integer.parseInt(input.nextLine());
           if(choice == 1)
           {
               System.out.println("Enter the name : ");
               String name = input.nextLine();
               System.out.println("Enter the id : ");
               int id = Integer.parseInt(input.nextLine());
               System.out.println("Enter the role of employee : ");
               String role = input.nextLine();
               System.out.println("For Employee press 1 ");
               System.out.println("For Trainee press 2 ");
               int  c = Integer.parseInt(input.nextLine());
               if(c == 1)
               {
                   System.out.println("Enter the working hrs per day : ");
                   int hrs = Integer.parseInt(input.nextLine());
                   Payroll e = new Employee(name,id,role,hrs);
                   hp.put(id,new Employee(name,id,role,hrs));
               }
               else
               {
                   System.out.println("Enter the scale : ");
                   int scale = Integer.parseInt(input.nextLine());
                   hp.put(id,new Trainee(name,id,role,scale));
               }
           }
           else if (choice == 2)
           {

               System.out.println("Enter the employee id to display : ");
               int key = Integer.parseInt(input.nextLine());
               hp.get(key).displayDetails();

           }
           else
           {
               break;
           }
       }
    }
}

