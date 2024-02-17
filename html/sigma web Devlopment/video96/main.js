import mongoose from 'mongoose';
import express from 'express';
import Todo from '../models/Todo.js';
const app = express()
const port = 3000

async function connect() {
    let connect = await mongoose.connect('mongodb://localhost:27017/todo')
    console.log(connect.toString());
}

connect();


app.get('/', async (req, res) => {
    res.send('Hello World!')
    const todo = new Todo({ name: "Aashihs", age: 20, surname: "vishwakarama" })
    await todo.save()
})

app.listen(port, () => {
    console.log(`Example app listening on port ${port}`)
})