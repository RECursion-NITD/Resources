/**
 * Created by gaurav on 6/2/16.
 */
interface Shape {
    int getHeight();
    int getWidth();
    void setHeight(int h);
    void setWidth(int w);
}
class Rectangle implements Shape{
    int height, width;

    @Override
    public int getHeight() {
        return height;
    }

    @Override
    public int getWidth() {
        return width;
    }

    @Override
    public void setHeight(int h) {
        height = h;
    }

    @Override
    public void setWidth(int w) {
        width = w;
    }
}
public class Interfaces {
    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle();
        rectangle.setHeight(5);
        rectangle.setWidth(4);
        System.out.println(rectangle.getHeight());
        System.out.println(rectangle.getWidth());
    }
}
