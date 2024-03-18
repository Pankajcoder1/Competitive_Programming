select sum(cty.population)
from city as cty
inner join country as cuntry
on cty.countrycode = cuntry.code
where cuntry.continent = "Asia"