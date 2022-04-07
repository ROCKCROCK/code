DECLARE
fName VARCHAR2(15);
lName VARCHAR2(15);
BEGIN
fName:='&fName';
lName:='&lName';
DBMS_OUTPUT.PUT_LINE('Full Name with comma->'||fName||','||lName);
DBMS_OUTPUT.PUT_LINE('Full Name with space->'||fName||' '||lName);
END;
