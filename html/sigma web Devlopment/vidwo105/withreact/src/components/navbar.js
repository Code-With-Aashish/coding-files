import React from 'react'

const Navbar = ({ logotext }) => {
  return (
    <div>
      <ul>
        <div className="logo">{logotext}</div>
        <li>Home</li>
        <li>About</li>
        <li>Contact Us</li>
      </ul>
    </div>
  )
}

export default Navbar
