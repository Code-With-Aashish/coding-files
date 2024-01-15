    // Arrays of words for the generator
    const prefixes = ['Tech', 'Inno', 'Global', 'Smart', 'Dynamic', 'Eco'];
    const suffixes = ['Solutions', 'Labs', 'Tech', 'Hub', 'Systems', 'Corp'];

    function generateName() {
        const randomPrefix = prefixes[Math.floor(Math.random() * prefixes.length)];
        const randomSuffix = suffixes[Math.floor(Math.random() * suffixes.length)];
        
        const generatedName = randomPrefix + randomSuffix;

        // Display the generated name
        document.getElementById('generatedName').innerText = generatedName;
    }