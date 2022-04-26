create Table Employee1( employee_id int NOT NULL PRIMARY KEY,Name Varchar2(20) NOT NULL,Months int,Salary int);
INSERT INTO Employee1 VALUES('12228','Rose','15','1968');
INSERT INTO Employee1 VALUES('33645','Angela','1','3443');
INSERT INTO Employee1 VALUES('45692','Frank','17','1608');
INSERT INTO Employee1 VALUES('56118','Patrick','7','1345');
INSERT INTO Employee1 VALUES('59725','Lisa','11','2330');
INSERT INTO Employee1 VALUES('74197','Kimberly','16','4372');
INSERT INTO Employee1 VALUES('78454','Bonnie','8','1771');
INSERT INTO Employee1 VALUES('83565','Michael','6','2017');
INSERT INTO Employee1 VALUES('98607','Todd','5','3396');
INSERT INTO Employee1 VALUES('99989','Joe','9','3573');

select name from Employee1 where salary>2000 and months<10 order by employee_id;
 
--drop table employee1; 