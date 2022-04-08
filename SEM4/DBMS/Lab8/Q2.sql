DECLARE
a number(5);
square number(5);
cube number(5);
double number(5);
BEGIN
a:=&a;
square:=a*a;
cube:=a*a*a;
double:=a+a;
DBMS_OUTPUT.PUT_LINE('Square of a is->'||square);
DBMS_OUTPUT.PUT_LINE('Cube of a is->'||cube);
DBMS_OUTPUT.PUT_LINE('double of a is->'||double);
END;
/