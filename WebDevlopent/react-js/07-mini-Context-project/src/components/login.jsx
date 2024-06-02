import React, { useContext, useState } from 'react'
import UserContext from '../context/UserContext'

const login = () => {
    const [Username, setUsername] = useState('')
    const [Password, setPassword] = useState('')
    const { setUser } = useContext(UserContext)

    const HandelSubmit = (e) => {
        e.preventDefault()
        setUser({ Username, Password })
    }

    return (
        <div>
            <h2>login</h2>
            <input type="text" value={Username} onChange={(e) => { setUsername(e.target.value) }} placeholder='Username' />
            <input type="text" value={Password} onChange={(e) => { setPassword(e.target.value) }} placeholder='E-mail' />
            <input type="text" placeholder='Password' />
            <button onClick={HandelSubmit}>submit</button>
        </div>
    )

}

export default login
