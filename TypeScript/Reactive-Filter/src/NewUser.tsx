import { useState } from "react";

export type User = {
    id: number;
    name: string;
    surname: string;
    age: number;
};

export const NewUser = () => {
    const [user, setUser] = useState<User[]>([]);

    const [name, setName] = useState("");
    const [surname, setSurname] = useState("");
    const [age, setAge] = useState<number | "">();

    const handleAddUser = () => {
        if (!name.trim() || !surname.trim() || !age) return;

        const newUser: User = {
            id: Date.now(),
            name: name.trim(),
            surname: surname.trim(),
            age: Number(age),
        };

        setUser((prevUser) => [...prevUser, newUser]);

        // Reset fields
        setName("");
        setSurname("");
        setAge("");
    };

    const handleRemoveUser = (userId: number) => {
        setUser((prevUser) => prevUser.filter((u) => u.id !== userId));
    };

    return (
        <div className="p-4">
            <h1 className="text-xl font-bold mb-4">Gestione utenti</h1>
            <div className="flex gap-2 mb-4">
                <input
                    type="text"
                    placeholder="Nome"
                    value={name}
                    onChange={(e) => setName(e.target.value)}
                    className="border px-2 py-1 rounded"
                />
                <input
                    type="text"
                    placeholder="Cognome"
                    value={surname}
                    onChange={(e) => setSurname(e.target.value)}
                    className="border px-2 py-1 rounded"
                />
                <input
                    type="number"
                    placeholder="Età"
                    value={age}
                    onChange={(e) => setAge(Number(e.target.value))}
                    className="border px-2 py-1 rounded w-20"
                />
                <button
                    onClick={handleAddUser}
                    className="bg-blue-500 text-white px-4 py-1 rounded hover:bg-blue-600"
                >
                    Aggiungi
                </button>
            </div>

            <div className="space-y-2">
                {user.map((u) => (
                    <div
                        key={u.id}
                        className="flex border rounded p-2 bg-gray-50 shadow"
                    >
                        <p>
                            <span className="font-semibold">{u.name}</span>{" "}
                            {u.surname} — {u.age} anni
                        </p>

                        <button onClick={() => handleRemoveUser(u.id)}>
                            Remove
                        </button>
                    </div>
                ))}
            </div>
        </div>
    );
};
