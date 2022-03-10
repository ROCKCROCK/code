--Q1
--a
select concat(employee.fname,concat(' ',employee.lname)) as "Employee Name", dept.deptname from employee INNER JOIN dept on employee.deptid = dept.deptid;
--b
select supervisor from employee where EMPLOYEEID=2001;
--c
select concat(fname,concat(' ',lname)) "Full name",Salary,supervisor from employee;
--d
select concat(employee.fname,concat(' ',employee.lname)) "Full name",employee.Salary,emplevel.levelno from employee INNER JOIN emplevel on employee.salary>=emplevel.lowsalary and employee.salary<=emplevel.highsalary;
--e
select concat(employee.fname,concat(' ',employee.lname)) "Full name",DEPT.DEPTNAME,POSITION.POSITIONDESC,QUALIFICATION.QUALDESC from EMPLOYEE INNER JOIN DEPT on EMPLOYEE.DEPTID=DEPT.DEPTID INNER JOIN POSITION on EMPLOYEE.POSITIONID=POSITION.POSITIONID INNER JOIN QUALIFICATION on EMPLOYEE.QUADID=QUALIFICATION.QUADID;
--f
select EMPLOYEE.* from EMPLOYEE INNER JOIN DEPT on DEPT.DEPTID=EMPLOYEE.DEPTID where DEPT.DEPTNAME='CSE';
--g
select concat(employee.fname,concat(' ',employee.lname)) "Full name",DEPENDENT.DEPENDENTID,DEPENDENT.DEPDOB"Dependent DOB",DEPENDENT.RELATION"Dependent Relation" from EMPLOYEE FULL OUTER JOIN DEPENDENT on EMPLOYEE.EMPLOYEEID=DEPENDENT.EMPLOYEEID;
--Q2
select concat(employee.fname,concat(' ',employee.lname)) "Full name",TRUNC(( EXTRACT(YEAR FROM SYSDATE) - EXTRACT(YEAR FROM employee.HireDate) ))"years working",DEPT.DEPTNAME from EMPLOYEE INNER JOIN DEPT on EMPLOYEE.DEPTID=DEPT.DEPTID order by TRUNC(( EXTRACT(YEAR FROM SYSDATE) - EXTRACT(YEAR FROM employee.HireDate) )) desc;
--Q3
select concat(employee.fname,concat(' ',employee.lname)) "Full name", DEPT.DEPTNAME from employee INNER JOIN DEPT ON employee.deptid = DEPT.deptid where DEPT.deptid=(select employee.deptid from employee where concat(employee.fname,concat(' ',employee.lname))='Pawan Singh') AND concat(employee.fname,concat(' ',employee.lname))!='Pawan Singh';
--Q4
--a
select concat(STUDENT.FIRST,concat(' ',STUDENT.last)) "Full name", MAJOR.MAJORDESC from student INNER JOIN major on student.majorid = major.majorid;
--b
select concat(STUDENT.FIRST,concat(' ',STUDENT.last)) "Full name" from STUDENT INNER JOIN CRSSECTION on STUDENT.FACULTYID=CRSSECTION.FACULTYID INNER JOIN TERM on term.TERMID=CRSSECTION.TERMID where enddate between To_DATE('01-11-2022','DD-MM-YYYY') AND TO_DATE('28-02-2023','DD-MM-YYYY');
--c
select concat(STUDENT.FIRST,concat(' ',STUDENT.last)) "Full name", FACULTY.NAME "Faculty Name" , LOCATION.BUILDING, LOCATION.ROOMNO from STUDENT INNER JOIN FACULTY on FACULTY.FACULTYID=STUDENT.FACULTYID INNER JOIN LOCATION on FACULTY.ROOMID=LOCATION.ROOMID;
--d
select CRSSECTION.* , FACULTY.NAME "Faculty Name" from CRSSECTION FULL JOIN FACULTY on CRSSECTION.FACULTYID=FACULTY.FACULTYID FULL JOIN TERM on CRSSECTION.TERMID=TERM.TERMID where startdate between To_DATE('20-03-2022','DD-MM-YYYY') AND TO_DATE('21-06-2022','DD-MM-YYYY');
--e
select TITLE,PREREQ from COURSE;

