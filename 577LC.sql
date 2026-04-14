select name,bonus from Employee Left join Bonus on Employee.empid=Bonus.empId where bonus<1000 || bonus is NULL;
