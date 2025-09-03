import { useState } from "react";
import { TaskCard } from "./components/TaskCard";
import type { TaskCardProps } from "./components/TaskCard";

function App() {
    const [tasks, setTasks] = useState<TaskCardProps[]>([]);
    const [counterTasks, setCounterTasks] = useState(0);
    const [newTitle, setNewTitle] = useState("");

    const handleCreateNew = () => {
        if (!newTitle.trim()) return; // non creare task vuoti

        const newTask: TaskCardProps = {
            id: counterTasks + 1,
            title: newTitle,
            state: "TO_DO",
        };

        setTasks([...tasks, newTask]);
        setCounterTasks(counterTasks + 1);
        setNewTitle(""); // resetta input
    };

    const handleRemoveTask = (id: number) => {
        setTasks(tasks.filter((task) => task.id !== id));
        setCounterTasks(counterTasks - 1);
    };

    return (
        <div className="p-4">
            <div className="flex gap-4 items-center mb-4">
                <h1 className="text-xl font-bold">
                    Welcome to the TS-TO-DO app
                </h1>
                <p>You have {counterTasks} TODOs </p>
            </div>

            <div className="flex gap-2 mb-4">
                <input
                    type="text"
                    value={newTitle}
                    onChange={(e) => setNewTitle(e.target.value)}
                    placeholder="Enter task title"
                    className="border px-2 py-1 rounded flex-1"
                />
                <button
                    className="bg-blue-500 text-white px-4 py-1 rounded"
                    onClick={handleCreateNew}
                >
                    Create
                </button>
            </div>

            <div className="space-y-2">
                {tasks.map((task) => (
                    <TaskCard
                        key={task.id}
                        id={task.id}
                        title={task.title}
                        description={task.description}
                        state={task.state}
                    />
                ))}
            </div>
        </div>
    );
}

export default App;
