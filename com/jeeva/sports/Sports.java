package com.jeeva.sports;

class Sports
{
    
    int teamSize;
    // int overs;

    Sports(int teamSize)
    {
        this.teamSize = teamSize;
    }
    void getTeamSize()
    {
        System.out.println("The team size : "+teamSize);
    }

}
class Chess extends Sports
{
    Chess(int teamSize)
    {
        super( teamSize);
    }
    @Override
    void getTeamSize()
    {
        System.out.println("The team size for chess is  : "+teamSize+" players ");
    }
}
class Carrrom extends Sports{
    Carrrom(int teamSize)
    {
        super( teamSize);
    }
    @Override
    void getTeamSize()
    {
        System.out.println("The team size for carrom is : "+teamSize+" players ");
    }
}
class Dice extends Sports{
    Dice(int teamSize)
    {
        super( teamSize);
    }
    @Override
    void getTeamSize()
    {
        System.out.println("The team size for dice is : "+teamSize+" players ");
    }
    
}




