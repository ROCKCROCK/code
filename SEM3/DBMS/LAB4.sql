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
--Q9
select avg(commission) from employee;
--Q13
select power(2, 10) from dual;
--Q18
select * from student where to_char(birthdate, 'MM')=5;
