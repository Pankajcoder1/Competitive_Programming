select ct.name FROM city as ct
inner join country as cty
on ct.countrycode = cty.code
where cty.continent = "Africa"