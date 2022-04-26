create table students(id int NOT NULL primary key,name varchar2(20));
INSERT INTO STUDENTS VALUES(1,'Ashley');
INSERT INTO STUDENTS VALUES(2,'Samantha');
INSERT INTO STUDENTS VALUES(3,'Julia');
INSERT INTO STUDENTS VALUES(4,'Scarlet');

create table friends(id int NOT NULL primary key,friend_id int);
INSERT INTO friends VALUES(1,2);
INSERT INTO friends VALUES(2,3);
INSERT INTO friends VALUES(3,4);
INSERT INTO friends VALUES(4,1);

create table packages(id int NOT NULL primary key,Salary float);
INSERT INTO packages VALUES(1,15.20);
INSERT INTO packages VALUES(2,10.06);
INSERT INTO packages VALUES(3,11.55);
INSERT INTO packages VALUES(4,12.12);

SELECT a.Name 
FROM ( 
    SELECT s.ID, s.Name, p.Salary, f.Friend_ID, ss.name as name_f, pp.Salary as salary_f 
    FROM Students s
    INNER JOIN Packages p ON s.ID = p.ID INNER JOIN Friends f ON s.ID = f.ID INNER JOIN Students ss ON f.Friend_ID = ss.ID INNER JOIN Packages pp ON f.Friend_ID = pp.ID 
    ) a  
WHERE a.salary_f > a.Salary ORDER BY salary_f;

-- drop table students;
-- drop table friends;
-- drop table packages;


