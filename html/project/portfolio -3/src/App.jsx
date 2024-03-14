import Styles from './App.module.css'
import About from './components/About/About'
import Exprience from './components/Experience/Exprience'
import Navbar from './components/Navbar/Navbar'
import Hero from './components/hero/hero'

function App() {

  return (
    <div className={Styles.App}>
      <Navbar />
      <Hero />
      <About />
      <Exprience />
    </div>
  )
}

export default App
