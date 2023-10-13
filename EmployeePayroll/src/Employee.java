public class Employee extends Payroll{
    private int workingHrs;
    final int HOURLYRATE = 800/8;

    Employee(String name, int id, String designation,int workingHrs) {
        super(name, id, designation);
        this.workingHrs = 30*workingHrs;
    }

    @Override
    public int payslipCalculator()
    {
        return workingHrs*HOURLYRATE;
    }
}
