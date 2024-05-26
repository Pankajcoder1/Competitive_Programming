select
company.company_code,
company.founder,
count(distinct lead_manager.lead_manager_code),
count(distinct senior_manager.senior_manager_code),
count(distinct manager.manager_code),
count(distinct employee.employee_code)
from company
inner join lead_manager on lead_manager.company_code = company.company_code
inner join senior_manager on senior_manager.company_code = company.company_code
inner join manager on manager.company_code = company.company_code
inner join employee on employee.company_code = company.company_code
group by company.company_code, company.founder
order by company.company_code
asc
