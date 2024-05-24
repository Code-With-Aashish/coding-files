import './App.css'
import Navbar from './components/navbar'
import Footer from './components/footer'
import Card from './components/card'

function App() {
  return (
    <>
      <Navbar />
      <div className="cards">
        <Card title='card 1' disc='discripition if the card 1' />
        <Card title='card 2' disc='discripition if the card 2' />
        <Card title='card 3' disc='discripition if the card 3' />
        <Card title='card 4' disc='discripition if the card 4' />
      </div>
      <Footer />
    </>
  )
}

export default App
