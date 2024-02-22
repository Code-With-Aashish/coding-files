import { useState } from 'react';
import './App.css';
import Navbar from './components/navbar';
import Footer from './components/footer';

function App() {
  const [value, setvalue] = useState(0)
  return (
    <div className="App">
      <Navbar logotext="Ashu" />
      <div className="vlaue">
        {value}
      </div>
      <button onClick={() => { setvalue(value + 1) }} >Click Me</button>
      <Footer />
    </div>
  );
}

export default App;