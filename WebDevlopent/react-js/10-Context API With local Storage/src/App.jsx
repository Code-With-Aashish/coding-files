import './App.css'
import { useState, useId, useEffect } from 'react'
import { TodoProvider } from './contexts/index'
import TodoForm from "./components/TodoForm"


function App() {
  const [Todo, setTodo] = useState([])

  const addTodo = (todo) => {
    setTodo((prev) => [...prev, { id: useId(), ...todo }])
  }


  const deleteTodo = (id) => {
    setTodo((prev) => prev.filter((prev) => prev.id !== id))
  }


  const updateTodo = (id, msg) => {
    setTodo((prev) => prev.map((prevTodo) => (prevTodo.id === id ? msg : prevTodo)))
  }


  const CompletedTodo = (id) => {
    setTodo((prev) => prev.map((todo) => todo.id === id ? { ...prev, completed: !todo.completed } : todo))
  }


  useEffect(() => {
    const todos = JSON.parse(localStorage.getItem("todos"))
    if (todos && todos.length > 0) {
      setTodo(todos)
    }
  }, [])

  useEffect(() => {
    localStorage.setItem("todos", JSON.stringify(Todo));
  }, [Todo]);


  return (
    <TodoProvider value={{ Todo, CompletedTodo, addTodo, deleteTodo, updateTodo }}>
      <div className="bg-[#172842] min-h-screen py-8">
        <div className="w-full max-w-2xl mx-auto shadow-md rounded-lg px-4 py-3 text-white">
          <h1 className="text-2xl font-bold text-center mb-8 mt-2">Manage Your Todos</h1>
          <div className="mb-4">
            {/* Todo form goes here */}
            <TodoForm />
          </div>
          <div className="flex flex-wrap gap-y-3">
            {/*Loop and Add TodoItem here */}
          </div>
        </div>
      </div>
    </TodoProvider>
  )
}

export default App
