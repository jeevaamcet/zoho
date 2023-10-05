import java.util.Scanner;

public class MovieProgram{
    
    static int  list  = 4;
    
    static int findAvgBudgetByDirector( Movie Movieobj[], String directorName){
        
        int sum = 0,n = 0;
        
        for(Movie x :Movieobj){
            
            if(x.getdirectorName().equals(directorName)){
                sum += x.getbudget();
                n++;
            }
        }
        return sum/n;
        
    }
    static Movie getMovieByRatingBudget(Movie Movieobj[], int rating, int budget)
    {
        for(Movie x: Movieobj){
            if(x.getbudget() == budget && x.getrating() == rating)
            {
                return x;
            }
        }
        return null;
    }
    public static void main(String[] args){
        
        Movie Movieobj[] = new Movie[4];
        Scanner sc = new Scanner(System.in);
        
        String userDirectorName;
        int userRating;
        int userBudget;
        
        for (int  i  = 0; i < list; i++){
            System.out.print("Enter the movie id ");
            int movieId = sc.nextInt();
            System.out.print("Enter the directorName ");
            String directorName = sc.next();
            System.out.print("Enter the rating ");
            int rating = sc.nextInt();
            System.out.print("Enter the budget ");
            int budget = sc.nextInt();
            
            Movieobj[i] = new Movie(movieId,directorName,rating,budget);
        }
        
        System.out.println("Enter the directorName to search :");
        userDirectorName = sc.next();
        
        if(findAvgBudgetByDirector( Movieobj, userDirectorName) == 0){
            System.out.println("Sorry-the given director has not yet directed any movie");
        }
        else{
            System.out.println("The avg budget of director is : "+findAvgBudgetByDirector( Movieobj, userDirectorName));
        }
        
        System.out.println("Enter the rating to search :");
        userRating = sc.nextInt();
        System.out.println("Enter the budget to search :");
        userBudget = sc.nextInt();
        
        if(getMovieByRatingBudget(Movieobj,userRating, userBudget) == null){
            
            System.out.println("Sorry- No movies is available with given rating and budget");
        }
        else{
            System.out.println("The movie id is : "+getMovieByRatingBudget(Movieobj,userRating, userBudget).getmovieid());
        }
        
     
    }
}
class Movie{
    
    private int movieId;
    private String directorName;
    private int rating;
    private int budget;
    
    Movie(int movieId, String directorName, int rating, int budget){
        this.movieId = movieId;
        this.directorName = directorName;
        this.rating = rating;
        this.budget = budget;
    }
    
    public void setmovieId(int movieId){
        this.movieId = movieId;
    }
    
    public void setdidirectorname(String directorName){
        this.directorName = directorName;
    }
    
    public void setrating(int rating){
        this.rating = rating;
    }
    
    public void setbudget(int movieId){
        this.budget = budget;
    }
    
    public int getmovieid(){
        return movieId;
    }
    
    public String getdirectorName(){
        return directorName;
    }
    
    public int getrating(){
        return rating;
    }
    
    public int getbudget(){
        return budget;
    }
}
