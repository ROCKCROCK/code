--Q1
select dept.DEPTNAME from dept INNER JOIN EMPLOYEE on employee.DEPTID=DEPT.deptid where employee.FNAME='Ronit' and EMPLOYEE.LNAME='Nagar';
--Q2
select supervisor from employee where EMPLOYEEID=2001;
--Q3
select concat(employee.fname,concat(' ',employee.lname)) "Full name",QUALIFICATION.QUALDESC from employee INNER JOIN QUALIFICATION ON employee.quadid = QUALIFICATION.quadid where QUALIFICATION.Quadid=(select employee.QUADID from employee where concat(employee.fname,concat(' ',employee.lname))='Pawan Singh') AND concat(employee.fname,concat(' ',employee.lname))!='Pawan Singh';
--Q4
select deptid, count(*) from employee group by deptid having count(*)>(select count(*) from employee where deptid=202);
--Q5
select concat(fname,concat(' ',lname)) "Full name", hiredate from employee where hiredate > (select hiredate from employee where fname = 'Pawan' and lname='Singh');
--Q6
select concat(employee.fname, concat(' ',employee.lname)) as "Employee Name", dept.deptname from Employee INNER JOIN Dept ON Employee.deptid = dept.deptid where dept.deptname = 'CSE';
--Q7
create table emp30 as select * from employee where deptid=202;
select * from emp30;
--Q8
insert into emp30 (employeeid, lname, fname, positionid, supervisor, hiredate, commission, deptid, quadid) select employeeid, lname, fname, positionid, supervisor, hiredate, commission, deptid, quadid from employee where deptid=203;
select * from emp30;
--drop table emp30;
--Q9
MERGE INTO emp30 o  USING (SELECT EmployeeId, Lname, Fname, HireDate, Salary  FROM employee) e ON (o.EmployeeId = e.EmployeeId)WHEN MATCHED THEN UPDATE SET o.Salary = e.Salary WHEN NOT MATCHED THEN INSERT (o.EmployeeId,o.Lname,o.Fname,o.HireDate,o.Salary) VALUES (e.EmployeeId,e.Lname,e.Fname,e.HireDate,e.Salary);
--Q10
SELECT Lname, Fname, Salary, DeptId  FROM employee o WHERE Salary = (SELECT MIN(Salary)  FROM employee WHERE DeptId = o.DeptId   GROUP BY DeptId);
--Q11
select * from dependent where employeeid = (select employeeid from employee where employeeid = (select employeeid from dept where deptname='Chemical'));
--Q12
select concat(fname,concat(' ',lname)) "Full name" from employee where employeeid=ANY (select employeeid from employee minus select distinct employeeid from dependent);
--Q13
select concat(fname,concat(' ',lname)) "Full name" from employee where employeeid=2003 and salary = ANY (select avg(salary) from employee group by deptid);
select concat(fname,concat(' ',lname)) "Full name" from employee where employeeid=2003 and salary > ANY (select avg(salary) from employee group by deptid);
select concat(fname,concat(' ',lname)) "Full name" from employee where employeeid=2003 and salary < ANY (select avg(salary) from employee group by deptid);
select concat(fname,concat(' ',lname)) "Full name" from employee where employeeid=2003 and salary > ALL (select avg(salary) from employee group by deptid);
select concat(fname,concat(' ',lname)) "Full name" from employee where employeeid=2003 and salary < ALL (select avg(salary) from employee group by deptid);
--Q14
select faculty.name, faculty.phone from faculty where faculty.facultyid = (select facultyid from student where last='Gupta' and first='Aryan');
--Q15
select * from location where roomtype != 'O' and capacity <= ANY (select capacity from (select capacity from location where roomtype != 'O' group by capacity order by capacity) ) And rownum <= 2;
--Q16
select * from (select * from crssection where termid=101 order by maxcount desc) where rownum<=3;
--Q17
select * from location INNER JOIN ROOM ON Room.roomdesc = Location.RoomType where location.RoomType = '1 bed AC';
--Q18
create table SP03SECT as select CourseID, Section, FacultyID, RoomID from crssection where TERMID=102;
select * from sp03sect;
--drop table sp03sect;
--Q19
delete from SP03SECT where facultyID = (select facultyID from faculty where name='Jhalak');
select * from sp03sect;
--Q20
SELECT f.name from faculty f WHERE NOT EXISTS (select * from crssection c where c.facultyid = f.facultyid and c.termid = '101');



