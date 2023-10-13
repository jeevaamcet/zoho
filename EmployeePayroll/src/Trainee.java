public class Trainee extends Payroll {
    private int fixedwage;

    Trainee(String name, int id, String designation,int fixedwage) {
        super(name, id, designation);
        this.fixedwage = fixedwage;
    }
    @Override
    public int payslipCalculator()
    {
        return fixedwage;
    }
}
