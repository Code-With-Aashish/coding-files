import './App.css'
import Card from './components/card'

function App() {
  let arr = {
    name: 'ashish',
    role: 'frontend devloper'
  }
  let NewArray = [1, 2, 3, 4, 5]

  return (
    <>
      <h1 className=' bg-green-400 mb-10 p-10 '>Tailwind Test</h1>
      <Card price='0' />
      <Card price='99' />
      <Card />
    </>
  )
}

export default App
