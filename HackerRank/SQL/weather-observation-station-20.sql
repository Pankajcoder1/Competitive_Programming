with rank_data as (
    select 
    lat_n, 
    ROW_NUMBER() over (order by lat_n asc) as cnt,
    count(*) over () as total
    from station order by lat_n asc
)

select
round(src.lat_n,4)
from 
rank_data as src
where src.cnt = (
    case
        when src.total%2=1 then (src.total+1)/2
        when src.total%2=0 then src.total/2 + ((src.total/2)+1)/2
    end
)