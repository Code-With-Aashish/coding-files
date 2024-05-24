import React from "react";
import styles from "./hero.module.css";

export const imageurl = (path) => {
    return new URL(`/assets/${path}`, import.meta.url).href;
}

export const Hero = () => {
    return (
        <section className={styles.container}>
            <div className={styles.content}>
                <h1 className={styles.title}>Hi, I'm Aashish</h1>
                <p className={styles.description}>
                    I'm a full-stack developer with 1 Year of experience using Html, Css and Js...
                </p>
                <a href="mailto:myemail@email.com" className={styles.contactBtn}>
                    Contact Me
                </a>
            </div>
            <img
                src={imageurl("hero/heroImage.png")}
                alt="Hero image of me"
                className={styles.heroImg}
            />
            <div className={styles.topBlur} />
            <div className={styles.bottomBlur} />
        </section>
    );
};

export default Hero;
