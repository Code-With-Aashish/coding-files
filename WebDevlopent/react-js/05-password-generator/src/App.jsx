import React, { useState, useCallback, useEffect, useRef } from 'react';

function App() {
  const [length, setLength] = useState(6);
  const [allowNumber, setAllowNumber] = useState(false);
  const [specialCharacter, setSpecialCharacter] = useState(false);
  const [password, setPassword] = useState('');
  // useRef hook
  const Passwordref = useRef(null)

  const generatePassword = useCallback(() => {
    const uppercaseLetters = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ';
    const lowercaseLetters = 'abcdefghijklmnopqrstuvwxyz';
    let characters = uppercaseLetters + lowercaseLetters;

    if (allowNumber) {
      characters += '0123456789';
    }
    if (specialCharacter) {
      characters += '~`!@#$%^&*()_+={}:"<>?,./;[]';
    }

    let newPassword = '';
    for (let i = 0; i < length; i++) {
      const randomIndex = Math.floor(Math.random() * characters.length);
      newPassword += characters.charAt(randomIndex);
    }

    setPassword(newPassword);
  }, [length, allowNumber, specialCharacter]);

  useEffect(() => {
    generatePassword();
  }, [length, allowNumber, specialCharacter, generatePassword]);


  const copyPasswordToClipboard = useCallback(() => {
    Passwordref.current?.select()
    window.navigator.clipboard.writeText(password)
  }, [password])




  return (
    <div className="max-w-max mx-auto shadow-md rounded-lg px-4 my-8 text-orange-500 bg-gray-600 h-auto">
      <div className="text-white text-center my-3">Random Password Generator</div>
      <div className="flex shadow rounded-lg overflow-hidden mb-4">
        <input
          type="text"
          value={password}
          className="outline-none w-full py-1 px-3"
          placeholder="Generated Password"
          readOnly
          ref={Passwordref}
        />
        <button className="outline-none bg-blue-700 text-white px-3 py-0.5" onClick={copyPasswordToClipboard}>
          Copy
        </button>
      </div>
      <div className="flex gap-10">
        <div className="flex gap-2">
          <input
            type="range"
            min={6}
            max={20}
            value={length}
            onChange={(e) => setLength(e.target.value)}
          />
          <label>Length: {length}</label>
        </div>
        <div className="flex gap-2">
          <input
            type="checkbox"
            id="NumberInput"
            checked={allowNumber}
            onChange={() => setAllowNumber((prev) => !prev)}
          />
          <label htmlFor="NumberInput">Include Numbers</label>
        </div>
        <div className="flex gap-2">
          <input
            type="checkbox"
            id="CharacterInput"
            checked={specialCharacter}
            onChange={() => setSpecialCharacter((prev) => !prev)}
          />
          <label htmlFor="CharacterInput">Include Special Characters</label>
        </div>
      </div>
    </div>
  );
}

export default App;
