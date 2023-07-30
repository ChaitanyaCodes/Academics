public class Rectangle extends Shape {
    private double width, length, area;

    public Rectangle() {
        this(1,1);
    }
    public Rectangle(double width, double length) {
        this.width = width;
        this.length = length;
    }

    @Override
    public double calculateArea() {
        this.area = width *length;
        return this.area;
    }

    @Override
    public void display() {
        System.out.println("\nThe area of rectangle is " + this.area);
    }

}