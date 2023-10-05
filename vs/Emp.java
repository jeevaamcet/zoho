public abstract class Emp
{
    private String name;
    private int baseprice;

    Emp(String name, int baseprice)
    {
        this.name = name;
        this.baseprice = baseprice;

    }
    public String getName()
    {
        return this.name;
    }
    public int getBase()
    {
        return this.baseprice;
    }
    public void SetName(String name)
    {
        this.name = name;
    }
    public void setBase(int baseprice)
    {
        this.baseprice = baseprice;
    }

    abstract void calculateSalary();

    abstract void getInfo();
}
class Manager extends Emp{

    private bonus;

    Manager(String name, int baseprice, int bonus)
    {
        super(name,baseprice);
        this.bonus = bonus;
    }
    public int getBonus()
    {
        return this.bonus;
    }
    public void setBonus(int bonus)
    {
        this.bonus = bonus;
    }
    public void calculateSalary()
    {
        System.out.println("the salary of manager is "+(getBase()+getBonus()));
    }
    public void getInfo()
    {
        System.out.println("The employee name is "+getName());
        System.out.println("The base price "+getBase());
    }
}