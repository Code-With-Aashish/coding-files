import mongoose from "mongoose";

const todoSchema = new mongoose.Schema({
    name: String,
    completed: Boolean,
    age : Number,
    surname: String
});

const Todo = mongoose.model('Todo', todoSchema);
