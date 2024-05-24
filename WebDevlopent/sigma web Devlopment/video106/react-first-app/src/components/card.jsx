import React from 'react'
import './card.css'

const card = (props) => {
    return (
        <div className='card'>
            <img src="./public/img.jpg" alt="" width={90} />
            <h1>{props.title}</h1>
            <p>{props.disc}</p>
        </div>
    )
}

export default card
