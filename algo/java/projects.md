# Projects

## SmartBots

Began with a lot of assigments in Node.js, creating basic crud APIs, connecting front-end to backend, connecting to databases etc.

Working on Storing context in session storage.

Using redis as a session store.

Basic Model:

Using redis to store context of the conversation.
Studying the api structure.

## AOC

MySQL, pm2, nginx, nodejs, express, html css, js

regions(rid,rdesc,rname)

questions(qid, ..., points)

teams(tid,username, score, ... )

qlogs(tid,qid,rid, no, solved, ans);

view (qlogs and teams -> tid) => questions qid and rid)

Score -> view
Select coalase(0,max(attempt)), coalase(0,solve) from qlogs where tid = ?;

select t1.tid, t1.score from teamscore where t1.score >=all(select max(score) from teamsscore where rid = ?);

arr.size();

## QBud

Movie recommendations
Song recommendations

Schema: 

songs ranking
movie genre,director,desc,rating

comments: name, comments,
Select * from comments order by id desc;

## 2 fact auth
AWS SES
AWS SNS

Session: email, password
token: session;
AWS call and verification,

if yes name rendered, else nothing.

## model bank

10th grade project

add, substract show balance.

WHY.

