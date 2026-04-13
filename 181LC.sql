SELECT e.name as Employee from Employee e  JOIN 
Employee f On f.id=e.managerId where e.salary>f.salary ;
