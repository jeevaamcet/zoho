public class Inherit
{
    public static void main (String[] args)
    {
        Shape area = new Shape();
        System.out.println(area.getArea());
    }
}
class Shape
{
    Double getArea()
    {
        return 0.0;
    }
}
class Rectangle extends Shape{
    private int width;
    private int height;
    Rectangle(double a, double b)
    {
        width = (int)a;
        height = (int)b;
    }
    Double getArea()
    {
        return (double)width*height;
    }
}