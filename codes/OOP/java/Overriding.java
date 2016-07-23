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
}
class Rectangle extends Shape {
    public void printArea() {
        System.out.println(width*height);
    }
}

public class Overriding {
    public static void main(String args[]) {
        Shape shape = new Rectangle();
        shape.setHeight(5);
        shape.setWidth(4);
        shape.printArea();
    }
}
