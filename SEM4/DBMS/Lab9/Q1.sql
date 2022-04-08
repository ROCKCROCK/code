DECLARE
leapYear NUMBER(10);
BEGIN
leapYear:=&leapYear;
IF((MOD(leapYear,4)=0 and MOD(leapYear,100)!=0) or MOD(leapYear,400)=0)
THEN
dbms_output.put_line('It is a Leap Year :)');
ELSE
dbms_output.put_line('It is not a Leap Year :(');
END If;
END;
/