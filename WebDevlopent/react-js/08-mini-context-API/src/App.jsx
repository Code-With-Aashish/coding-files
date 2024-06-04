import React, { useState, useEffect } from 'react'
import { ThemProvider } from './contexts/Thems'
import Button from './components/Button'
import Card from './components/Card'
import './App.css'

function App() {
  
  const [ThemeMode, setThemeMode] = useState("light")

  const lightTheme = () => {
    setThemeMode("light")
  }

  const darkTheme = () => {
    setThemeMode("dark")
  }

  useEffect(() => {
    const body = document.querySelector("html")
    body.classList.remove("light", "dark")
    body.classList.add(ThemeMode)
  }, [ThemeMode])

  return (
    <ThemProvider value={{ ThemeMode, darkTheme, lightTheme }}>
      <div className="flex flex-wrap min-h-screen items-center">
        <div className="w-full">
          <div className="w-full max-w-sm mx-auto flex justify-end mb-4">
            <Button />
          </div>
          <div className="w-full max-w-sm mx-auto">
            <Card />
          </div>
        </div>
      </div>

    </ThemProvider>
  )
}

export default App
