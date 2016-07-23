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
}
class Rectangle extends Shape {
    public void printArea() {
        System.out.println(width*height);
    }
}
public class Inheritance {
    public static void main(String args[]) {
        Rectangle rectangle = new Rectangle();
        rectangle.setHeight(5);
        rectangle.setWidth(4);
        rectangle.printArea();
    }

}