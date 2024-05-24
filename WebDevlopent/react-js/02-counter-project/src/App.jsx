import { useState } from 'react'

function App() {
  const [count, setCount] = useState(0)

  const addfun = () => {
    if (count <= 19) {
      setCount(count + 1)
    }
  }

  const subfun = () => {
    if (count > 0) {
      setCount(count - 1)
    }

  }

  return (
    <>
      <h1>The count is {count}</h1>
      <button onClick={addfun}>Add</button>
      <br />
      <button onClick={subfun}>Subtract</button>
    </>
  )
}

export default App
