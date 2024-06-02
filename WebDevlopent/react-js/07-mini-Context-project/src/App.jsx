import './App.css'
import Profile from './components/Profile'
import Login from './components/login'
import UserContextProvider from './context/UserContextProvider'

function App() {
  
  return (
    <UserContextProvider>
      <h1>React Context API</h1>
      <Profile />
      <Login />
    </UserContextProvider>
  )
}

export default App
