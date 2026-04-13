SELECT employee_id from Employees where employee_id Not in(Select employee_id from Salaries)
UNION
SELECT employee_id from Salaries where employee_id Not in(Select employee_id from Employees) order by employee_id asc;
