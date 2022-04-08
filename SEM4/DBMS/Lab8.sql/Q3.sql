DECLARE
a number(5):=10;
b number(5):=15;
c number(5);
BEGIN
dbms_output.put_line('Value of a before Swapping->'||a);
dbms_output.put_line('Value of b before Swapping->'||b);
c:=a;
a:=b;
b:=c;
dbms_output.put_line('Value of a After Swapping->'||a);
dbms_output.put_line('Value of b After Swapping->'||b);
END;
/