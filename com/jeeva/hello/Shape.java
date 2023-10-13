package com.jeeva.hello;

public class Shape
{
    int dim1;
    int dim2;
    public Shape(int a, int b)
    {
        dim1 = a;
        dim2 = b;
    }
    public int getArea()
    {
        return dim1*dim2;
    }
    public int getPerimeter()
    {
        return dim1+dim2;
    }
}
// class Circle extends Shape
// {
//     Circle(int a, int b)
//     {
//         super(a,b);
//     }
//     // public int getArea()
//     // {
//     //     return(int)(Math.PI*(dim1*dim1));
//     // }
//     // public int getPerimeter()
//     // {
//     //     return(Math.PI);
//     // }
// }
// class Square extends Shape
// {
//     Square(int a, int b)
//     {
//         super(a,b);
//     }
//     public int getArea()
//     {
//         return dim1*dim2;
//     }
// }