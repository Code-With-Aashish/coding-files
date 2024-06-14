import { createContext, useContext } from "react"

export const TodoContext = createContext({
    todos: [
        {
            id: 1,
            todoTitle: "inital title",
            completed: false

        }
    ],
    addTodo: (todo) => { },
    updateTodo: (id, msg) => { },
    CompletedTodo: (id) => { },
    deleteTodo: (id) => { },
})

export const UseTodo = () => {
    return useContext(TodoContext)
}

export const TodoProvider = TodoContext.Provider
