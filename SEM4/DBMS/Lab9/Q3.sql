DECLARE
x number(5);
BEGIN
FOR x in REVERSE 1 .. 10 LOOP
dbms_output.put_line(x);
END LOOP;
END;
/