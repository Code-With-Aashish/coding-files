import React from 'react'
import Styles from './about.module.css'

export const imageurl = (path) => {
    return new URL(`/assets/${path}`, import.meta.url).href;
}

const About = () => {
    return (
        <section className={Styles.container} id='about'>
            <h2 className={Styles.title}>About</h2>
            <div className={Styles.content}>
                <img src={imageurl("about/aboutImage.png")} alt="About image" className={Styles.aboutimg} />
                <ul className={Styles.aboutItems}>
                    <li className={Styles.aboutItem}>
                        <img src={imageurl("about/cursorIcon.png")} alt="Cursor icon" />
                        <div className={Styles.aboutItemText}>
                            <h3>Frontend Developer</h3>
                            <p>
                                I'm a frontend developer with experience in building responsive
                                and optimized sites
                            </p>
                        </div>
                    </li>
                    <li className={Styles.aboutItem}>
                        <img src={imageurl("about/serverIcon.png")} alt="server icon" />
                        <div className={Styles.aboutItemText}>
                            <h3>Backend Developer</h3>
                            <p>
                                I have a experience of 8 months of the Backend devloper
                            </p>
                        </div>
                    </li>
                    <li className={Styles.aboutItem}>
                        <img src={imageurl("about/uiIcon.png")} alt="UI icon" />
                        <div className={Styles.aboutItemText}>
                            <h3>UI Desinor</h3>
                            <p>
                                I'm a frontend developer with experience in building responsive
                                and optimized sites
                            </p>
                        </div>
                    </li>
                </ul>
            </div>
        </section>
    )
}

export default About
