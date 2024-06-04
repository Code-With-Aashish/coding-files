import React, { createContext, useContext } from 'react'

export const ThemContext = createContext({
    themeMode: "Light",
    darkTheme: () => { },
    lightTheme: () => { },
})

export const ThemProvider = ThemContext.Provider

export default function useTheme() {
    return useContext(ThemContext)
}