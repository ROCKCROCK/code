--Q1
select concat(employee.fname,employee.lname) as "Employee Name", dept.deptname from employee, dept where employee.employeeid = dept.employeeid;
--Q2
select supervisor from employee where EMPLOYEEID=2001;
--Q3
