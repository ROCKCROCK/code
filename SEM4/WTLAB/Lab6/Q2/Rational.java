public class Rational {
    int p, q;

    Rational(int a, int b) {
        p = a;
        q = b;
    }

    Rational add(Rational c) {
        int denominator = c.q * q;
        int numerator = q * c.p + p * c.q;
        Rational result = new Rational(numerator, denominator);
        return result;
    }

    Rational subtract(Rational c) {
        int denominator = c.q * q;
        int numerator = q * c.p - p * c.q;
        Rational result = new Rational(numerator, denominator);
        return result;
    }

    Rational multiply(Rational c) {
        int numerator = p * c.p;
        int denominator = q * c.q;
        Rational result = new Rational(numerator, denominator);
        return result;
    }

    Rational divide(Rational c) {
        int denominator = p * c.q;
        int numerator = q * c.p;
        Rational result = new Rational(numerator, denominator);
        return result;
    }
}
