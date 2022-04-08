DECLARE
first EMPLOYEE.FNAME%TYPE;
last EMPLOYEE.LNAME%TYPE;
salary EMPLOYEE.SALARY%TYPE;
commission EMPLOYEE.commission%TYPE;
qual_desc QUALIFICATION.QUALDESC%TYPE;
BEGIN
select employee.FNAME,employee.LNAME,QUALIFICATION.QUALDESC,employee.SALARY,employee.COMMISSION INTO first,last,qual_desc,salary,commission FROM EMPLOYEE INNER JOIN QUALIFICATION ON QUALIFICATION.QUADID=EMPLOYEE.QUADID WHERE EMPLOYEE.EMPLOYEEID=&employee_id; 
dbms_output.put_line('Employee Name->'||first||' '||last||'  Qualification->'||qual_desc||'  Salary With Commission->'||(salary+commission));
END;
/