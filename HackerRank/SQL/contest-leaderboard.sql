with whole_data as (
    select
    hackers.hacker_id as hacker_id,
    hackers.name as name,
    max(score) as max_score,
    submissions.challenge_id
    from hackers
    inner join submissions on submissions.hacker_id = hackers.hacker_id
    group by submissions.challenge_id, hackers.hacker_id, hackers.name
    having max(score) > 0
)

select 
hacker_id,
name,
sum(max_score) as total_score
from whole_data
group by hacker_id, name
order by total_score desc, hacker_id asc
