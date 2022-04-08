DECLARE
     area NUMBER(10,2);
     radius NUMBER(5);
     pi CONSTANT NUMBER(5,3):=3.14;
  
  BEGIN
    radius:=&radius;
    area:=pi*radius*radius;
    dbms_output.put_line('Area is->'||area);
  
  END;