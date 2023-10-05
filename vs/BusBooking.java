import java.util.Scanner;
import java.util.ArrayList;

public class BusBooking{


    public static void main(String[] args){
            
    int choice = 0;
    int idTrack = 100;
        int userid=-1;
        String userName;

        ArrayList<Passenger> p = new ArrayList<>();
        Bus []buses = new Bus[2];
        buses[0] = new Bus(1001,55);
        buses[1] = new Bus(1002,55);
        Scanner sc = new Scanner(System.in);

        // while(true){
            while(true){
                System.out.println("***********Welcome to travels************");
                System.out.println("1 . New user");
                System.out.println("2 . existing user");
                System.out.println("3. exit ");
                System.out.println("Enter the choice : ");
                choice = Integer.parseInt(sc.nextLine());

                if(choice == 1)
                {
                System.out.println("Enter the Name :");
                // sc.nextLine();
                userName = sc.nextLine();
                    userid = ++idTrack;
                    p.add(new Passenger(userid,userName));
                    System.out.println("The user id is : " + userid);
                }
                else if(choice == 2)
                {
                    while(true)
                    {
                        String temp = "";
                        for(Passenger pass : p)
                        {
                            if(userid == pass.getpassId())
                            {
                                temp = pass.getName();
                            }
                        }
                        System.out.println("***********Welcome " + temp +" ************");
                        System.out.println("3 .Book bus ");
                        System.out.println("4 . View ticket ");
                        System.out.println("5. logout ");
                        System.out.println("Enter your choice : ");
                        choice = Integer.parseInt(sc.nextLine());

                        if(choice == 3)
                        {
                            int ticketcount;
                            System.out.println("Bus number "+buses[0].getbusNo() + " available seats " +buses[0].getavailSeat());
                            System.out.println("Bus number "+buses[1].getbusNo() + " available seats " +buses[1].getavailSeat());
                            System.out.println("Enter the bus number : ");
                            int Busno = Integer.parseInt(sc.nextLine());
                            System.out.println("Enter the total number of tickets to book : ");
                            ticketcount = Integer.parseInt(sc.nextLine());
                            for(Passenger x: p)
                            {
                                if(userid == x.getpassId())
                                {
                                    x.settotalSeat(x.gettotalSeat()+ticketcount);
                                    x.setbusNum(Busno);
                                    for(Bus b: buses)
                                    {
                                        if(b.getbusNo() == Busno){
                                            b.setavailSeat(b.getavailSeat() - ticketcount);
                                        }
                                    }
                                }
                            }
                        }   
                        else if(choice == 4){
                            for(Passenger x: p)
                            {
                                if(userid == x.getpassId()){
                                    System.out.println("Your booked ticket details : "+x.getName()+" "+x.getpassId()+" " + x.getbusNum() +" "+ x.gettotalSeat());
                                }
                            }

                        }
                        else if(choice == 5)
                        {
                            break;
                        }
                    }
                }
                else if(choice == 3){
                    System.out.println("Successfully exited ");
                    break;
                }
                else{
                    System.out.println("invalid input");
                    break;
                }
            }
        }
    }
// }

  class Bus{
        private int busNo;

        final int MaxCapacity = 55;

        private int availSeat;
        
        Bus(int busNo, int availSeat ){
            this.busNo = busNo;
            this.availSeat = availSeat;
        }
        
        public void setbusNo(int busNo){
            this.busNo = busNo;
        }
        
        public void setavailSeat(int availSeat){
            this.availSeat = availSeat;
        }
        
        public int getbusNo(){
            return busNo;
        }
        
        public int getavailSeat(){
            return availSeat;
        }
    }
    class Passenger {
        private int  passId;
        private String Name;
        private int totalSeat = 0;
        private int busNum;
        Passenger(int passId,String Name){
            this.passId = passId;
            this.Name = Name;
        }

        public int getpassId(){
            return passId;
        }
        public String getName(){
            return Name;
        }
        public int gettotalSeat(){
            return totalSeat;
        }
        public int getbusNum(){
            return busNum;
        }
        public void setpassId(int passId){
            this.passId = passId;
        }
        public void setgetName(String getName){
            this.Name = getName;
        }
        public void settotalSeat(int totalSeat){
            this.totalSeat = totalSeat;
        }
        public void setbusNum(int busNum){
            this.busNum = busNum;
        }
    }