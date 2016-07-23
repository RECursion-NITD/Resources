/**
 * Created by gaurav on 6/2/16.
 */
class Shape {
    private int height, width;

    public int getHeight() {
        return height;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public int getWidth() {
        return width;
    }

    public void setWidth(int width) {
        this.width = width;
    }
}

public class Encapsulation {
    public static void main(String[] args) {
        Shape shape = new Shape();
        shape.setHeight(5);
        shape.setWidth(4);
        System.out.println(shape.getHeight());
        System.out.println(shape.getWidth());
    }
}
