--Q1
select concat(fname,concat(', ',lname)) as Fullname,SALARY from employee;
--Q2
select Fname, Lname from employee where commission=0;
--Q3
select distinct building from location;
--Q4
select * from term where startdate between To_DATE('15-01-2022','DD-MM-YYYY') AND TO_DATE('15-05-2022','DD-MM-YYYY');
--Q5
select name from faculty where deptId in('OS1001','DB2002');
--Q6
select * from student where city in ('Lucknow','Dheradun');
--Q7
select EMPLOYEEID,SALARY from EMPLOYEE;
update employee set salary = salary+(salary*10/100) where employeeid = 2005;
select EMPLOYEEID,SALARY from EMPLOYEE;
--Q8
insert into department values ('206','B.Com','5006');
delete from department where deptid='206';
--Q9
select CSID, maxcount from crssection order by maxcount desc;
--Q10
select * from TERM;
insert into term values('2006','FinalTerm',TO_DATE('2022-01-03','YYYY-MM-DD'),TO_DATE('2022-06-20','YYYY-MM-DD'));
select * from TERM;
delete from term where TERMID='2006';
--Q11
ACCEPT DEPTID PROMPT "enter for deptid column b/w 200 and 250->";
--Q12
SELECT * from COURSE where PREREQ is NULL;
--Q13
SELECT name,deptId from faculty order by name,deptId desc;
--Q14
select name from faculty where name LIKE 'H%';
--Q15
SELECT * FROM term WHERE TO_CHAR(startDate,'dd.mm.yyyy') LIKE '%01.2022';
--Q16
COLUMN salary FORMAT 99,999.99;
COLUMN Lname FORMAT A30;
select * from employee;






