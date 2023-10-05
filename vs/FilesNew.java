import java.io.*;
import java.util.*;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.nio.file.StandardOpenOption;

public class FilesNew{
    public static void main(String[] args)throws IOException{
        File f = new File("text.txt");
    // FileWriter writer = new FileWriter("text.txt");
    Scanner sc = new Scanner(System.in);
    String text = sc.nextLine();
    Files.write(Paths.get("text.txt"),(text+" \n").getBytes(),StandardOpenOption.APPEND);
    // writer.close();
    }

}