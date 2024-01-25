async function getsongs() {
    try {
        let response = await fetch("http://127.0.0.1:3000/html/sigma%20web%20Devlopment/video84%20-%20spotfy%20clone/song/");
        let htmlContent = await response.text();
        let div = document.createElement("div");
        div.innerHTML = htmlContent;
        let as = div.getElementsByTagName("a");
        let songs = [];

        // Iterate through the anchor tags and filter out links ending with ".mp3"
        for (let i = 0; i < as.length; i++) {
            const element = as[i];
            if (element.href.endsWith(".mp3")) {
                songs.push(element.href.split("/song/")[1]);
            }
        }

        return songs;
    } catch (error) {
        console.error("Error fetching songs:", error);
        return [];
    }
}


async function main() {
    let songs = await getsongs();
    console.log(songs);

    let songUl = document.querySelector(".songlist").getElementsByTagName("ul")[0]
    for (const song of songs) {
        songUl.innerHTML = songUl.innerHTML + `<li> ${song.replaceAll("%20%", " ")} </li>`
    }

    if (songs.length > 0) {
        let audio = new Audio(songs[0]);

        audio.addEventListener("loadedmetadata", () => {
            let duration = audio.duration;
            console.log(audio.duration, audio.currentSrc, audio.currentTime);

            // Play the first song after loading metadata
            audio.play();
        });

        audio.addEventListener("error", (error) => {
            console.error("Error loading audio:", error);
        });
    } else {
        console.log("No songs found.");
    }
}

main();  
