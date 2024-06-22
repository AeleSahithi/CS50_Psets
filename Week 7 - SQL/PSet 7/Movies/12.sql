SELECT DISTINCT m.title
FROM movies m
JOIN stars s1 ON m.id = s1.movie_id
JOIN people p1 ON s1.person_id = p1.id AND p1.name = 'Bradley Cooper'
JOIN stars s2 ON m.id = s2.movie_id
JOIN people p2 ON s2.person_id = p2.id AND p2.name = 'Jennifer Lawrence'
WHERE m.id IN (
    SELECT movie_id FROM stars WHERE person_id = (
        SELECT id FROM people WHERE name = 'Bradley Cooper'
    )
)
AND m.id IN (
    SELECT movie_id FROM stars WHERE person_id = (
        SELECT id FROM people WHERE name = 'Jennifer Lawrence'
    )
);
