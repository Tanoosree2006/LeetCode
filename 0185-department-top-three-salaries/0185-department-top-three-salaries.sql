/* Write your PL/SQL query statement below */
with cte AS
(select d.name as department,e.name as employee,e.salary,
DENSE_RANK() OVER(PARTITION BY d.id ORDER BY e.salary DESC) AS rank
from employee e
join department d
on e.departmentId = d.id)
select department,employee,salary from cte where rank<4;