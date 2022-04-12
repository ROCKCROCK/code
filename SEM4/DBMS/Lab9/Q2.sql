DECLARE
x NUMBER:=1;
BEGIN
LOOP
IF MOD(x,2)!=0
THEN
dbms_output.put_line(x);
END IF;
x:=x+1;
IF x>10 
THEN
EXIT;
END IF;
END LOOP;
END;
/