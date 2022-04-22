select employeeID, fname, salary from employee;
DECLARE
    salIncr number;
    CURSOR Cur IS select employeeID, fname, salary from employee where deptid =&dept_id  FOR UPDATE;
BEGIN

    FOR employee_rec IN Cur
    LOOP
        IF employee_rec.salary < 20000
            THEN 
                salIncr := .15;

            ELSE 
                salIncr := .10;
        END IF;

        UPDATE employee 
        SET salary = salary + salary * salIncr
        WHERE CURRENT OF Cur;

    END LOOP;
END;
/
select employeeID, fname, salary from employee;