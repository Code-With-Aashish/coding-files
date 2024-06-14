import React, { useState } from "react";
import UserContext from "./UserContext";

const UserContextProvider = ({ Children }) => {

    const [user, setUser] = useState(null)
    const [password, setPassword] = useState(null)
    return (
        < UserContext.Provider value={{ user, setUser, password, setPassword }} >
            {Children}
        </ UserContext.Provider >
    )
}

export default UserContextProvider