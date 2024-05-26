select 
    concat(name,'(',left(occupation,1),')')
from occupations
order by name;
select 
    "There are a total of",count(occupation) as cnt,concat(lower(occupation),'s.')
from occupations
group by occupation
order by cnt asc;