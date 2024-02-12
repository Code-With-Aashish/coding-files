import express from 'express';
import mongoose from 'mongoose';
import Todo from "../models/Todo"

const app = express()
const port = 3000

async function startServer() {
    try {
        await mongoose.connect("mongodb://localhost:27017/")
        console.log("Connected to MongoDB")

        app.get('/', async (req, res) => {
            const todos = await Todo.find({});
            res.json(todos);
        })

        app.listen(port, () => {
            console.log(`Example app listening on port ${port}`)
        })
    } catch (error) {
        console.error("Failed to connect to MongoDB", error)
    }
}

startServer();