/**
 * Created by gaurav on 6/2/16.
 */
class Shape {
    protected int height, width;
    public void setHeight(int h) {
        height = h;
    }
    public void setWidth(int w) {
        width = w;
    }
    public void printArea() {
        System.out.println("Shape Unknown");
    }
    public int getWidth() {
        return width;
    }
}
class Rectangle extends Shape {
    public void printArea() {
        System.out.println(width*height);
    }
    public int getWidth() {
        return super.getWidth();
    }
}

public class Polymorphism {
    public static void main(String args[]) {

        Rectangle rectangle = new Rectangle();
        rectangle.setHeight(5);
        rectangle.setWidth(4);
        rectangle.printArea();

        Shape shape = new Rectangle();
        shape.setHeight(5);
        shape.setWidth(4);
        shape.printArea();
        System.out.println(shape.getWidth());
    }
}
