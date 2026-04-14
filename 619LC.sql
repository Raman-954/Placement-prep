SELECT MAX(num) AS num from (SELECT num  from MyNumbers group by num Having Count(num)=1) AS single_nums;
