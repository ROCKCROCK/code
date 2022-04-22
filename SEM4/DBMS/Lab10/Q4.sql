DECLARE
first EMPLOYEE.FNAME%TYPE;
last EMPLOYEE.LNAME%TYPE;
salary EMPLOYEE.SALARY%TYPE;
qual_desc QUALIFICATION.QUALDESC%TYPE;
BEGIN
select employee.FNAME,employee.LNAME,QUALIFICATION.QUALDESC,employee.SALARY INTO first,last,qual_desc,salary FROM EMPLOYEE INNER JOIN QUALIFICATION ON QUALIFICATION.QUADID=EMPLOYEE.QUADID WHERE EMPLOYEE.QUADID=&Quad_id;
dbms_output.put_line('Employee Name->'||first||' '||last||'  Qualification->'||qual_desc||' Salary->'||salary);
EXCEPTION
WHEN Too_many_rows  THEN
dbms_output.put_line('More than one employee with such qualification');
WHEN No_data_found THEN
dbms_output.put_line('No employees with such qualification');
END;
/