DECLARE
hours number(5);
rate number(5);
gp number(5);
np NUMBER(5);
tax NUMBER(5,3):=0.28;
BEGIN
hours:=&hours;
rate:=&rate;
gp:=hours*rate;
np:=gp-(gp*tax);
DBMS_OUTPUT.PUT_LINE('Gross Pay is->'||gp);
DBMS_OUTPUT.PUT_LINE('Net Pay is->'||np);
END;
/