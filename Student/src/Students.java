import java.util.ArrayList;

public class Students {
    public String name;
    public ArrayList<Integer> marks;
    double average;

    Students (String name,ArrayList<Integer> marks)
    {
        this.name = name;
        this.marks = marks;
        average = avgMarks(marks);

    }
    public double avgMarks(ArrayList<Integer> marks)
    {
        double avg = 0;
        for(double x:marks)
        {
            avg += x;
        }
        avg /= marks.size();
        return avg;
    }


}
