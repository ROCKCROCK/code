DECLARE
noOfDays DATE;
BEGIN
noOfDays:=TO_DATE('&month-&year','mm-yyyy');
noOfDays:=LAST_DAY(noOfDays);
dbms_output.put_line('Number Of Days in a Month->'||TO_CHAR(noOfDays,'DD'));
END;
/