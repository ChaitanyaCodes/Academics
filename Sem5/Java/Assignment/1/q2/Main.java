public class Main {
    public static void main(String[] args) {

        // Rectangle
        double width = 5, length = 7;
        Shape rectangle = new Rectangle(width, length);
        rectangle.calculateArea();
        rectangle.display();

        // Circle
        double radius = 5;
        Shape circle = new Circle(radius);
        circle.calculateArea();
        circle.display();

        // Triangle
        double a = 5, b = 3, c = 4;
        Shape triangle = new Triangle(a,b,c);
        triangle.calculateArea();
        triangle.display();
    }
}