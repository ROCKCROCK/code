DECLARE
    c_exception EXCEPTION;
    CURSOR cou_rse IS
      SELECT * FROM course;
    c_id course.CourseId%TYPE := '&CourseId';
    found BOOLEAN := FALSE;
    c_ourse course%ROWTYPE;

 BEGIN
    OPEN cou_rse;
     FETCH cou_rse INTO c_ourse;

     WHILE cou_rse%FOUND LOOP
       IF c_ourse.CourseId = c_id THEN
          found := TRUE;

       dbms_output.put_line('Course Id->'||c_ourse.courseid||'  Course Title->'||c_ourse.title||'  Course Credits->'||c_ourse.credits||'  Course Prereq->'||c_ourse.prereq);

        END IF;

           FETCH cou_rse INTO c_ourse;
      END LOOP;

      IF found = false THEN
         RAISE c_exception;
      END IF;

      CLOSE cou_rse;
 
  EXCEPTION
     WHEN c_exception THEN
       DBMS_OUTPUT.PUT_LINE('No such course: ' || c_id);
  END;
  /