import './App.css'
import { useState } from 'react'

function App() {
  const [Color, setColor] = useState("white")

  return (
    <div className='w-full h-screen' style={{ backgroundColor: Color, color: Color === 'black' ? 'white' : 'black' }}>
      < div className='fixed flex flex-wrap justify-center bottom-12 inset-x-0 px-2'>
        <div className='flex flex-wrap justify-center gap-12 bg-green-400 p-5 rounded-2xl'>
          <button onClick={() => setColor('green')}>green</button>
          <button onClick={() => setColor('red')}>red</button>
          <button onClick={() => setColor('pink')}>pink</button>
          <button onClick={() => setColor('blue')}>blue</button>
          <button onClick={() => setColor('gray')}>gray</button>
          <button onClick={() => setColor('black')}>black</button>
          <button onClick={() => setColor('brown')}>brown</button>
          <button onClick={() => setColor('white')}>white</button>
        </div>
      </div>
    </div >
  )
}

export default App
