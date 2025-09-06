import { useState } from "react";

// Array con i valori dei bottoni
const buttons = [
    ["C", "AC", "%", "➗"],
    ["1", "2", "3", "✖️"],
    ["4", "5", "6", "➖"],
    ["7", "8", "9", "➕"],
    ["(-)", "0", ",", "🟰"],
];

// Handler unico
function handleClick(symbol: string) {
    const [firstInput, setFirstInput] = useState("");
    const [operator, setOperator] = useState("");
    const [secondInput, setSecondInput] = useState("");

    switch (true) {
        case ["+", "-", "*", "/"].includes(value):
            setPreviousInput(currentInput);
            setOperator(value);
            setCurrentInput("0");
            break;
    }
}

export const Calculator = () => {
    return (
        <div>
            {buttons.map((riga) => (
                <div className="flex">
                    {riga.map((symbol) => (
                        <button onClick={() => handleClick(symbol)}>
                            {symbol}
                        </button>
                    ))}
                </div>
            ))}
        </div>
    );
};
