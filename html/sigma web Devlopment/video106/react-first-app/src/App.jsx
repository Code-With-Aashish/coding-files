import './App.css'
import Navbar from './components/navbar'
import Footer from './components/footer'
import Card from './components/card'

function App() {
  return (
    <>
      <Navbar />
      <div className="cards">
        <Card />
        <Card />
        <Card />
        <Card />
        <Card />
        <Card />
      </div>
      <Footer />
    </>
  )
}

export default App
