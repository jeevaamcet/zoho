package com.jeeva.sports;


public class Main{
    public static void main(String[] args)
    {
        Sports game1 = new Chess(2);
        Sports game2 = new Carrrom(4);
        Sports game3 = new Dice(2);
        Cricket game4 = new TestCricket(11,90);
        Cricket game5 = new OdiCricket(11,50);
        Cricket game6 = new T20Cricket(11,20);
        // Sports game7 = new VollyBall(6);
    

        game1.getTeamSize();
        System.out.println();
        game2.getTeamSize();
        System.out.println();
        game3.getTeamSize();
        System.out.println();
        game4.getTeamSize();
        game4.getOvers();
        System.out.println();
        game5.getTeamSize();
        game5.getOvers();
        System.out.println();
        game6.getTeamSize();
        game6.getOvers();
        System.out.println();
        // game7.getTeamSize();
        System.out.println();
        
    }
}
