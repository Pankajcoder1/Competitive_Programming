with max_salary_cte as (
    select max(months*salary) as highest_salary
    from employee
)

select highest_salary, count(employee_id) 
from employee, max_salary_cte
where employee.months*employee.salary = highest_salary
group by highest_salary