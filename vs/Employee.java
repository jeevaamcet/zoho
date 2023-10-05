public class Employee
{
    private int salary;

    Employee(int salary)
    {
        this.salary = salary;
    }
    void work()
    {
        System.out.println(" workinggg ");
    }
    int getSalary()
    {
        return salary;
    }
}
class HrManage extends Employee
{
    HrManage(int salary)
    {
        super(salary);
    }
    void work()
    {
        System.out.println("working here  ");
    }
    void addEmployee()
    {
        System.out.println(" adding employee ");
    }
}