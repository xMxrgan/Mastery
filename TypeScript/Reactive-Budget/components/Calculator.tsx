import { useState } from "react";

// Array con i valori dei bottoni
const buttons = [
    ["C", "AC", "%", "➗"],
    ["7", "8", "9", "✖️"],
    ["4", "5", "6", "➖"],
    ["1", "2", "3", "➕"],
    ["(-)", "0", ",", "🟰"],
];

export default function Calculator() {
    const [display, setDisplay] = useState("0");
    const [previousValue, setPreviousValue] = useState<number | null>(null);
    const [operator, setOperator] = useState<string | null>(null);
    const [waitingForNewValue, setWaitingForNewValue] = useState(false);

    // Funzione per gestire click
    const handleClick = (symbol: string) => {
        switch (symbol) {
            // Reset completo
            case "AC":
                setDisplay("0");
                setPreviousValue(null);
                setOperator(null);
                setWaitingForNewValue(false);
                break;

            // Clear solo display corrente
            case "C":
                setDisplay("0");
                setWaitingForNewValue(false);
                break;

            // Numeri
            case "0":
            case "1":
            case "2":
            case "3":
            case "4":
            case "5":
            case "6":
            case "7":
            case "8":
            case "9":
                if (waitingForNewValue) {
                    setDisplay(symbol);
                    setWaitingForNewValue(false);
                } else {
                    setDisplay(display === "0" ? symbol : display + symbol);
                }
                break;

            // Virgola decimale
            case ",":
                if (waitingForNewValue) {
                    setDisplay("0,");
                    setWaitingForNewValue(false);
                } else if (display.indexOf(",") === -1) {
                    setDisplay(display + ",");
                }
                break;

            // Operatori
            case "➕":
            case "➖":
            case "✖️":
            case "➗":
            case "%": {
                const inputValue = parseFloat(display.replace(",", "."));

                if (previousValue === null) {
                    setPreviousValue(inputValue);
                } else if (operator) {
                    const currentValue = previousValue || 0;
                    const newValue = calculate(
                        currentValue,
                        inputValue,
                        operator,
                    );

                    setDisplay(String(newValue).replace(".", ","));
                    setPreviousValue(newValue);
                }

                setWaitingForNewValue(true);
                setOperator(symbol);
                break;
            }

            // Cambio segno
            case "(-)":
                if (display !== "0") {
                    setDisplay(
                        display.startsWith("-")
                            ? display.slice(1)
                            : "-" + display,
                    );
                }
                break;

            // Uguale
            case "🟰": {
                const inputVal = parseFloat(display.replace(",", "."));

                if (previousValue !== null && operator) {
                    const newValue = calculate(
                        previousValue,
                        inputVal,
                        operator,
                    );
                    setDisplay(String(newValue).replace(".", ","));
                    setPreviousValue(null);
                    setOperator(null);
                    setWaitingForNewValue(true);
                }
                break;
            }

            default:
                break;
        }
    };

    // Funzione per calcolare
    const calculate = (
        firstValue: number,
        secondValue: number,
        operator: string,
    ): number => {
        switch (operator) {
            case "➕":
                return firstValue + secondValue;
            case "➖":
                return firstValue - secondValue;
            case "✖️":
                return firstValue * secondValue;
            case "➗":
                return secondValue !== 0 ? firstValue / secondValue : 0;
            case "%":
                return firstValue % secondValue;
            default:
                return secondValue;
        }
    };

    // Stile per i bottoni
    const getButtonStyle = (symbol: string) => {
        const baseStyle =
            "p-4 text-xl font-bold border border-gray-300 hover:bg-gray-100 active:bg-gray-200 transition-colors";

        // Bottoni operatori
        if (["➕", "➖", "✖️", "➗", "%", "🟰"].includes(symbol)) {
            return `${baseStyle} bg-orange-400 text-white hover:bg-orange-500`;
        }

        // Bottoni clear
        if (["C", "AC"].includes(symbol)) {
            return `${baseStyle} bg-gray-400 text-white hover:bg-gray-500`;
        }

        // Bottoni numeri
        return `${baseStyle} bg-white text-gray-800`;
    };

    return (
        <div className="max-w-sm mx-auto bg-gray-800 p-4 rounded-lg shadow-lg">
            {/* Display */}
            <div className="bg-black text-white text-right p-4 text-2xl font-mono mb-4 rounded">
                {display}
            </div>

            {/* Bottoni */}
            <div className="grid grid-cols-4 gap-2">
                {buttons.flat().map((symbol, index) => (
                    <button
                        key={`${symbol}-${index}`}
                        onClick={() => handleClick(symbol)}
                        className={getButtonStyle(symbol)}
                    >
                        {symbol}
                    </button>
                ))}
            </div>

            {/* Debug info (puoi rimuoverla) */}
            <div className="text-xs text-gray-400 mt-4 p-2">
                <div>Display: {display}</div>
                <div>Previous: {previousValue}</div>
                <div>Operator: {operator}</div>
                <div>Waiting: {waitingForNewValue ? "Yes" : "No"}</div>
            </div>
        </div>
    );
}
