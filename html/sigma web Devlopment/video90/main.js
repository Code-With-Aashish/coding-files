const express = require('express')
const app = express()
const port = 3000
const fs = require('fs')
const blog = require('./routes/blog')
// const { DateTime } = require('luxon');

// app.use(express.static("public"))

// const timestampInMilliseconds = 1707037037084;
// const timestampInSeconds = timestampInMilliseconds / 1000;

// // Convert to a Date object
// const dateTime = DateTime.fromMillis(timestampInSeconds * 1000, { zone: 'utc' });

// console.log("Converted Date and Time:", dateTime.toJSDate());

app.use('/blog', blog)

app.use((req, res, next) => {
    console.log(req.headers);
    req.ashu = " I am the best coder in the world.";
    fs.appendFileSync("logs.txt", `${Date.now()} is a ${req.method}\n`)
    console.log(`${Date.now()} is a ${req.method}`)
    // res.send("Hacked by Middlware 1")
    next()
})

// This is the Middleware 2
app.use((req, res, next) => {
    console.log('m2')
    next()
})

app.get('/', (req, res) => {
    res.send('Hello World!' + req.ashu)
})

app.get('/about', (req, res) => {
    res.send('about my self!')
})

app.get('/contact', (req, res) => {
    res.send('contact me on my modile number!')
})

app.listen(port, () => {
    console.log(`Example app listening on port ${port}`)
})