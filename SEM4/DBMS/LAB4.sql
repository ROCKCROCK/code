--Q1
column salary format $999,999;
select concat(fname,concat(', ',lname)) as Fullname, salary as Salary from employee;
--Q2
select concat(fname,concat(', ',lname)) as Fullname , commission from employee;
--Q3
select count(*) as Rooms from location;
--Q4
select count (Distinct building) as Buildings from location;
--Q5
select concat(First,concat(', ',Last)) as Fullname, birthdate as BirthDate from student;
--Q6
select round(avg((sysdate-birthdate)/365.25)) "average age",round(max((sysdate-birthdate)/365.25))"maximum age",round(min((sysdate-birthdate)/365.25))"minimum age" from student;
--Q7
select EmployeeId , count(*) as "No of Dependents" from DEPENDENT group by EmployeeId having count(*) >= 1;
--Q8
select EXTRACT(YEAR FROM HireDate) as "year of hiring" from EMPLOYEE;
--Q9a
select avg(commission) from employee;
--Q9b
select avg(coalesce(commission,0)) from employee;
--Q10
select sum(maxcount) from crssection;
--Q11
select power(2, 10) from dual;
--Q12
select CourseId, Title ,Credits ,(case when PREREQ is NULL then 'None' else 'one' end ) as PreReq from COURSE;
--Q13
select DEPTID,COUNT(FACULTYID) from FACULTY group by DEPTID;
--Q14
select DEPTID , AVG(SALARY) from EMPLOYEE group by DEPTID having AVG(SALARY) >= 20000;
--Q15
select EMPLOYEEID , TRUNC(( EXTRACT(YEAR FROM SYSDATE) - EXTRACT(YEAR FROM HireDate) )) as "years working" from EMPLOYEE;
--Q16
select * from student where to_char(birthdate, 'MM')=03;
--Q17
select LNAME,FNAME,coalesce(SALARY + COMMISSION , SALARY) as PAYOUT from EMPLOYEE;
--Q18
select FNAME ||' '|| LNAME "Name" ,(case when SALARY >= 100000 then 'HIGH' else (case when SALARY >= 50000 then 'MEDIUM' else 'LOW' end) end ) "level" from EMPLOYEE;




