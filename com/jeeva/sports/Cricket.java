package com.jeeva.sports;

class Cricket extends Sports
{
    int overs;

    Cricket(int teamSize,int overs)
    {
        super(teamSize);
        this.overs = overs;
    }
    
    void getOvers()
    {
        System.out.println("The number of overs is : "+overs);
    }
   
    void getTeamSize()
    {
        System.out.println("The team size for cricket is  : "+teamSize+" players ");
    }
}
class TestCricket extends Cricket
{
    TestCricket(int teamSize, int overs)
    {
        super(teamSize,overs);
    }
    @Override
    void getOvers()
    {
        System.out.println("The number of overs for test is : "+overs);
    }
    
}
class OdiCricket extends Cricket
{
    OdiCricket(int teamSize, int overs)
    {
        super(teamSize,overs);
    }
    @Override
    void getOvers()
    {
        System.out.println("The number of overs for Odi is : "+overs);
    }
    
}
class T20Cricket extends Cricket
{
    T20Cricket(int teamSize, int overs)
    {
        super(teamSize,overs);
    }
    @Override
    void getOvers()
    {
        System.out.println("The number of overs for T20 is : "+overs);
    }

}