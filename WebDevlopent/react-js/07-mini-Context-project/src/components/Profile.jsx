import React, { useContext } from 'react'
import UserContext from "../context/UserContext"


const Profile = () => {

    const { user } = useContext(UserContext)
    if (!user) {
        return (
            <div>Please Login</div>
        )
    }

    return (
        <>
            <h1>You are login</h1>
            <h2>Welcome {user.Username}</h2>
        </>
    )
}

export default Profile
