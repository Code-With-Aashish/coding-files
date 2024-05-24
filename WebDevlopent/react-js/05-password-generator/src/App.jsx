import { useState, useCallback } from 'react'

function App() {
  const [Lenth, setLenth] = useState(6)
  const [AllowNumber, SerAllowNumber] = useState(false)
  const [SpecialCharactor, SetSpecialCharactor] = useState(false)
  const [Password, SetPassword] = useState('')
  const PasswordGenerator = useCallback(() => {
    let Password = '';
    const string = 'ABCDEFGHIJKLMNOPQRSTUVWXYXZabcdfghijklmnopqrstuvwxyz';
    if (AllowNumber) {
      str += '0123456789'
    }
    if (SpecialCharactor) {
      str += '~`!@#$%^&*()_+={}:"<>?,./;]['
    }
    for (let i = 1; i <= string.length; i++) {
      let random = Math.floor(Math.random() * string.length + 1);
      Password += string.charAt(random)

    };
    SetPassword(Password)
  }, [Lenth, AllowNumber, SpecialCharactor, SetPassword])

  return (
    <>
      console.log(Password);
      <div className='w-full max-w-md mx-auto shadow-md rounded-lg px-4 my-8 text-orange-500 bg-gray-600 h-auto'>
        <div className='text-white text-center my-3'> Random Password Generator  </div>
        <div className='flex shadow rounded-lg overflow-hidden mb-4 '>
          <input type="text" value={Password} className='outline-none w-full py-1 px-3' placeholder='password' readOnly />
          <button className='outline-none bg-blue-700 text-white px-3 py-0.5 shrink-0'>copy</button>
        </div>
        <div className='flex gap-10 '>
          <div>
            <input type="range" />
          </div>
          <div className='flex gap-2'>
            <input type="checkbox" htmlFor="Number" /> <label htmlFor="Number">Number</label>
          </div>
          <div className='flex gap-2'>
            <input type="checkbox" /> <label htmlFor="SpacialCharactor">SpacialCharactor</label>
          </div>
        </div>
      </div>
    </>
  )
}

export default App