# Write your MySQL query statement below
# DELIMITER &&
# CREATE TRIGGER before_salary_update
# BEFORE UPDATE ON salary
# IF(NEW.sex=OLD.sex) then SET OLD.sex='m'
# END IF;
# IF(NEW.sex<>OLD.sex) then SET OLD.sex='f'
# END IF;
# END &&
# DELIMITER ;

UPDATE salary
SET sex=if(sex='f','m','f') ;