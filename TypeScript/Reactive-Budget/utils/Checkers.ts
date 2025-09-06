export const nameSurnameChecker = (word: string) => {
    let nameSurnameCheck: boolean = true;

    for (let i = 0; i < word.length; i++) {
        if (parseInt(word[i]) >= 0 && parseInt(word[i]) <= 9) {
            nameSurnameCheck = false;
        }
    }

    return nameSurnameCheck;
};

export const mailChecker = (mail: string) => {
    let atCheck: boolean = false;

    for (let i = 0; i < mail.length; i++) {
        if (mail[i] === "@") atCheck = true;
    }
    return atCheck;
};
