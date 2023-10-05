public class Person{
    private String fName;
    private String lName;
    
    Person(String fName, String lName)
    {
        this.fName = fName;
        this.lName = lName;
    }
    public String getFname()
    {
        return fName;
    }
    public String getLname()
    {
        return lName;
    }
}
class Employeee extends Person{

    private String empId;
    private String role;

    Employeee(String a, String b, String empId, String role)
    {
        super(a,b);
        this.empId = empId;
        this.role = role;
    }
    public String getLname()
    {
        return super.getLname() + " "+ role;
    }
    public String getEmpId()
    {
        return empId;
    }
}