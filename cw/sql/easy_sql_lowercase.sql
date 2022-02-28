-- https://www.codewars.com/kata/594800ba6fb152624300006d/train/sql


SELECT
	id, name, birthday, LOWER(race) AS race
FROM demographics;
