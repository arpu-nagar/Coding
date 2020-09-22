# Caching for SmartBots

I've planned to use RedisStore as Session Storage for the bot conversations.

## What exactly will redis be doing?

We'll be using a Redis client that is used to perform key-value operations. 

This layer will be embedded into the server layer itself.

We'll be using a hashtable or a hashmap as fast keyvalue Data Stuctures to store the state.

### Connecting to Redis

```javascript
//connecting to redis
const redis = require('redis');
const client = redis.createClient();

const redisConfig = {
  host: 'localhost',
  port: 6379,
  client: client,
  ttl: 604800
};

module.exports = (session) => {
  const redisStore = require('connect-redis')(session);
  return new redisStore(redisConfig);
};
```

We'll here be creating a connection to redis here.

```javascript
const app = require('express')()
    app.use(
  session({
    secret: process.env.SESSION_SECRET_KEY,
    resave: false,
    saveUninitialized: false,
    store: redisStore,
    cookie: { maxAge: 24 * 60 * 60 * 1000 },
  })
);
```
Using the RedisStore in the session.

### Structure of Session Storage

#### session variables
```javascript
    var greeting, demo, goodbye;
    var contextMap = {}
```

Greeting, demo and goodbye are the most common reachable end states of the bot conversation hence can be checked before hand to make things easy.

```javascript
    // basic context of a conversation
    var greeting, demo, goodbye;
    greeting = false, demo = false, goodbye = false;
    

    // api call for context as true(user inputs "bye or similar")
    goodbye = true, demo = false, greetings = false;

    //api call for greeting context
    goodbye = false, demo = false, goodbye = true;

    //api call for demo
    goodbye = true, demo = true, goodbye = false;

```

### Storing other context

As stated, we'll be using a HashMap to store context.

```javascript
    var contextMap = {}

    if(contextMap.has(
      a.property && a.property1 // just an example
    )){
      // do operation
    }
    //api call for context if context is not present in the map
    contextMap.set(a,b);
```

As objects stored in map are json, larger resources can be stored in the session too.

Session can be destroyed when conversation ends or can be stored in local store if needed.