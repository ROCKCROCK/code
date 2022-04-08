DECLARE
multiplicand NUMBER(5);
a NUMBER:=1;
BEGIN
multiplicand:=&multiplicand;
WHILE a<=10 LOOP
dbms_output.put_line(multiplicand||'*'||a||'='||(multiplicand*a));
a:=a+1;
END LOOP;
END;
/