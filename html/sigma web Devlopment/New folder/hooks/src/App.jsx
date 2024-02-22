import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
  const [count, setcount] = useState(0)
  return (
    <>
      <div>The count is : {count}</div>
      <button onClick={() => { setcount(count + 1) }}>Increment</button>
      <button onClick={() => { setcount(count - 1) }}>Decrement</button>
    </>
  )
}

export default App
