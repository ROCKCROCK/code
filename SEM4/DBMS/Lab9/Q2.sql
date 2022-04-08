DECLARE
x NUMBER:=1;
BEGIN
LOOP
dbms_output.put_line(x);
x:=x+1;
IF x>10 
THEN
EXIT;
END if;
END LOOP;
END;
/