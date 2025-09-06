import { useState } from "react";
import { nameSurnameChecker, mailChecker } from "../utils/Checkers";

export default function Profile() {
    const [name, setName] = useState("");
    const [surname, setSurname] = useState("");
    const [mail, setMail] = useState("");
    const [age, setAge] = useState(0); // ← Corretto: 0 invece di Number

    // State per controllare se siamo in modalità edit
    const [isEditing, setIsEditing] = useState(false);

    // State temporanei per il form (così possiamo annullare le modifiche)
    const [tempName, setTempName] = useState(name);
    const [tempSurname, setTempSurname] = useState(surname);
    const [tempMail, setTempMail] = useState(mail);
    const [tempAge, setTempAge] = useState(age);

    // State per errori di validazione
    const [errors, setErrors] = useState({
        name: "",
        surname: "",
        mail: "",
        age: "",
    });

    const handleNameChange = (value: string) => {
        setTempName(value);
        // Valida in tempo reale
        if (!nameSurnameChecker(value)) {
            setErrors((prev) => ({ ...prev, name: "Nome non valido" }));
        } else {
            setErrors((prev) => ({ ...prev, name: "" }));
        }
    };

    const handleSurnameChange = (value: string) => {
        setTempSurname(value);
        if (!nameSurnameChecker(value)) {
            setErrors((prev) => ({ ...prev, surname: "Cognome non valido" }));
        } else {
            setErrors((prev) => ({ ...prev, surname: "" }));
        }
    };

    const handleMailChange = (value: string) => {
        setTempMail(value);
        if (!mailChecker(value)) {
            setErrors((prev) => ({ ...prev, mail: "Email non valida" }));
        } else {
            setErrors((prev) => ({ ...prev, mail: "" }));
        }
    };

    const handleAgeChange = (value: number) => {
        setTempAge(value);
        if (value < 0 || value > 150) {
            setErrors((prev) => ({ ...prev, age: "Età non valida" }));
        } else {
            setErrors((prev) => ({ ...prev, age: "" }));
        }
    };

    const handleEditClick = () => {
        // Inizializza i valori temporanei con quelli attuali
        setTempName(name);
        setTempSurname(surname);
        setTempMail(mail);
        setTempAge(age);
        setIsEditing(true);
        // Reset errori
        setErrors({ name: "", surname: "", mail: "", age: "" });
    };

    const handleSave = () => {
        // Valida tutti i campi
        const isNameValid = nameSurnameChecker(tempName);
        const isSurnameValid = nameSurnameChecker(tempSurname);
        const isMailValid = mailChecker(tempMail);
        const isAgeValid = tempAge > 0 && tempAge <= 150;

        if (isNameValid && isSurnameValid && isMailValid && isAgeValid) {
            // Salva i valori
            setName(tempName);
            setSurname(tempSurname);
            setMail(tempMail);
            setAge(tempAge);
            setIsEditing(false);

            // Qui potresti anche fare una chiamata API per salvare sul server
            console.log("Profilo salvato:", {
                name: tempName,
                surname: tempSurname,
                mail: tempMail,
                age: tempAge,
            });
        } else {
            // Mostra errori
            setErrors({
                name: !isNameValid ? "Nome non valido" : "",
                surname: !isSurnameValid ? "Cognome non valido" : "",
                mail: !isMailValid ? "Email non valida" : "",
                age: !isAgeValid ? "Età non valida" : "",
            });
        }
    };

    const handleCancel = () => {
        // Reset ai valori originali
        setTempName(name);
        setTempSurname(surname);
        setTempMail(mail);
        setTempAge(age);
        setIsEditing(false);
        setErrors({ name: "", surname: "", mail: "", age: "" });
    };

    return (
        <div className="max-w-md mx-auto bg-white rounded-lg shadow-md p-6">
            {/* Header con foto profilo */}
            <div className="text-center mb-6">
                <div className="w-24 h-24 bg-gray-300 rounded-full mx-auto mb-4 flex items-center justify-center text-gray-600 text-sm">
                    PICTURE
                </div>

                {/* Bottone Edit */}
                {!isEditing && (
                    <button
                        onClick={handleEditClick}
                        className="bg-blue-500 text-white px-4 py-2 rounded hover:bg-blue-600 transition-colors"
                    >
                        ✏️ Modifica Profilo
                    </button>
                )}
            </div>

            {/* Vista normale (non in editing) */}
            {!isEditing && (
                <div className="space-y-4">
                    <div className="text-center">
                        <h2 className="text-xl font-bold text-gray-800">
                            {name || "Nome"} {surname || "Cognome"}
                        </h2>
                    </div>
                    <div className="text-center text-gray-600">
                        {mail || "email@esempio.com"}
                    </div>
                    {age > 0 && (
                        <div className="text-center text-gray-600">
                            {age} anni
                        </div>
                    )}
                </div>
            )}

            {/* Form di modifica */}
            {isEditing && (
                <form
                    onSubmit={(e) => e.preventDefault()}
                    className="space-y-4"
                >
                    {/* Campo Nome */}
                    <div>
                        <label className="block text-sm font-medium text-gray-700 mb-1">
                            Nome
                        </label>
                        <input
                            type="text"
                            value={tempName}
                            onChange={(e) => handleNameChange(e.target.value)}
                            className={`w-full px-3 py-2 border rounded-md focus:outline-none focus:ring-2 focus:ring-blue-500 ${
                                errors.name
                                    ? "border-red-500"
                                    : "border-gray-300"
                            }`}
                            placeholder="Inserisci il nome"
                        />
                        {errors.name && (
                            <p className="text-red-500 text-sm mt-1">
                                {errors.name}
                            </p>
                        )}
                    </div>

                    {/* Campo Cognome */}
                    <div>
                        <label className="block text-sm font-medium text-gray-700 mb-1">
                            Cognome
                        </label>
                        <input
                            type="text"
                            value={tempSurname}
                            onChange={(e) =>
                                handleSurnameChange(e.target.value)
                            }
                            className={`w-full px-3 py-2 border rounded-md focus:outline-none focus:ring-2 focus:ring-blue-500 ${
                                errors.surname
                                    ? "border-red-500"
                                    : "border-gray-300"
                            }`}
                            placeholder="Inserisci il cognome"
                        />
                        {errors.surname && (
                            <p className="text-red-500 text-sm mt-1">
                                {errors.surname}
                            </p>
                        )}
                    </div>

                    {/* Campo Email */}
                    <div>
                        <label className="block text-sm font-medium text-gray-700 mb-1">
                            Email
                        </label>
                        <input
                            type="email"
                            value={tempMail}
                            onChange={(e) => handleMailChange(e.target.value)}
                            className={`w-full px-3 py-2 border rounded-md focus:outline-none focus:ring-2 focus:ring-blue-500 ${
                                errors.mail
                                    ? "border-red-500"
                                    : "border-gray-300"
                            }`}
                            placeholder="inserisci@email.com"
                        />
                        {errors.mail && (
                            <p className="text-red-500 text-sm mt-1">
                                {errors.mail}
                            </p>
                        )}
                    </div>

                    {/* Campo Età */}
                    <div>
                        <label className="block text-sm font-medium text-gray-700 mb-1">
                            Età
                        </label>
                        <input
                            type="number"
                            value={tempAge || ""}
                            onChange={(e) =>
                                handleAgeChange(Number(e.target.value) || 0)
                            }
                            className={`w-full px-3 py-2 border rounded-md focus:outline-none focus:ring-2 focus:ring-blue-500 ${
                                errors.age
                                    ? "border-red-500"
                                    : "border-gray-300"
                            }`}
                            placeholder="Es: 25"
                            min="1"
                            max="150"
                        />
                        {errors.age && (
                            <p className="text-red-500 text-sm mt-1">
                                {errors.age}
                            </p>
                        )}
                    </div>

                    {/* Bottoni Salva/Annulla */}
                    <div className="flex space-x-3 pt-4">
                        <button
                            type="button"
                            onClick={handleSave}
                            className="flex-1 bg-green-500 text-white py-2 px-4 rounded hover:bg-green-600 transition-colors"
                        >
                            ✅ Salva
                        </button>
                        <button
                            type="button"
                            onClick={handleCancel}
                            className="flex-1 bg-gray-500 text-white py-2 px-4 rounded hover:bg-gray-600 transition-colors"
                        >
                            ❌ Annulla
                        </button>
                    </div>
                </form>
            )}
        </div>
    );
}
