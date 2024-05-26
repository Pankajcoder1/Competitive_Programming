declare @no_of_stars INT
set @no_of_stars = 20
while @no_of_stars > 0
begin
print replicate("* ", @no_of_stars)
set @no_of_stars = @no_of_stars - 1
end
