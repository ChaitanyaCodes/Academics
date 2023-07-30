public class Circle extends Shape {
    public double radius, area;
    final double pi = Math.PI;

    public Circle() {
        this(1);
    }   
    public Circle(double radius) {
        this.radius = radius;
    }

    @Override
    public double calculateArea() {
        this.area = pi * Math.pow(radius, 2);
        return this.area;
    }
    
    @Override
    public void display() {
        System.out.println("\nThe area of circle is " + this.area);
    }
}