# Write your MySQL query statement below
SELECT tw.tweet_id
FROM (SELECT tweet_id, content FROM Tweets
WHERE LENGTH(content)!=15
) as tw
WHERE LENGTH(content) > 15