select cuntry.continent, floor(avg(cty.population))
from city as cty
inner join country as cuntry
on cty.countrycode = cuntry.code
group by cuntry.continent

-- floor() -> round down to nearest integer