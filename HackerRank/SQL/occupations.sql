with data as (
      select
        name, occupation,
        row_number() over(partition by occupation order by name asc) as row_num
        from occupations
)

select 
    max(case when occupation ="Doctor" then name end) as doc_n,
    max(case when occupation ="Professor" then name end) as pro_n,
    max(case when occupation ="Singer" then name end) as sin_n,
    max(case when occupation ="Actor" then name end) as act_n
from
    data
group by row_num
