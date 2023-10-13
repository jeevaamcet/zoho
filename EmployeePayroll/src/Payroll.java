public class Payroll {
    private String name;
    private int id;
    private String designation;



    Payroll(String name,int id, String designation) {
        this.name = name;
        this.id = id;
        this.designation = designation;
    }
    public int payslipCalculator()
    {
        return 0;
    }
    public void displayDetails()
    {
        System.out.println("Name : "+this.name);
        System.out.println("Id : "+this.id);
        System.out.println("Designation : "+this.designation);
        System.out.println("Salary : "+payslipCalculator()+"\n");
    }
}
