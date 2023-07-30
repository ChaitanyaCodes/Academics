public class Triangle extends Shape {
    private double a, b, c, area;

    public Triangle() {
        this(1,1,1);
    }
    public Triangle(double a, double b, double c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    @Override
    public double calculateArea() {
        double s = (a + b + c) / 2;
        this.area = Math.sqrt(s * (s - a) * (s - b) * (s - c));
        return this.area;
    }
    
    @Override
    public void display() {
        System.out.println("\nThe area of triangle is " + this.area);
    }
}