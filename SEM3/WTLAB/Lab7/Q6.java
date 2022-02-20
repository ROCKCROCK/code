class plate {
    int l, w;

    plate(int length, int width) {
        l = length;
        w = width;
    }
}

class box extends plate {
    int h;

    box(int length, int width, int height) {
        super(length, width);
        h = height;
    }
}

class woodbox extends box {
    int t;

    woodbox(int length, int width, int height, int thick) {
        super(length, width, height);
        t = thick;
    }

    void show() {
        System.out.println("Length -> " + l);
        System.out.println("Breadth -> " + w);
        System.out.println("Height -> " + h);
        System.out.println("Thickness -> " + t);
    }

}

public class Q6 {
    public static void main(String[] args) {
        woodbox a = new woodbox(50, 30, 40, 6);
        a.show();
    }
}
