declare @no_of_stars INT
set @no_of_stars = 1
while @no_of_stars < 21
begin
print replicate("* ", @no_of_stars)
set @no_of_stars = @no_of_stars + 1
end
