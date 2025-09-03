export type TaskCardProps = {
    id: number;
    title: string;
    description?: string;
    state: TaskState;
    onMarkDone?: (id: number) => void;
    onRemove?: (id: number) => void;
};

type TaskState = "DONE" | "TO_DO";

export const TaskCard = ({
    id,
    title,
    description,
    state,
    onMarkDone,
    onRemove,
}: TaskCardProps) => {
    const stateColor =
        state === "DONE"
            ? "bg-green-200 text-green-800"
            : "bg-yellow-200 text-yellow-800";

    return (
        <div className="border rounded-lg p-4 shadow-md bg-white flex flex-col gap-2">
            <div className="text-lg font-semibold">
                {id}. {title}
            </div>

            {description && <div className="text-gray-600">{description}</div>}

            <div
                className={`inline-block px-2 py-1 text-sm font-medium rounded ${stateColor}`}
            >
                {state}
            </div>

            <div className="flex gap-2 mt-2">
                {state === "TO_DO" && onMarkDone && (
                    <button
                        className="bg-green-500 text-white px-3 py-1 rounded hover:bg-green-600"
                        onClick={() => onMarkDone(id)}
                    >
                        Mark as Done
                    </button>
                )}
                {onRemove && (
                    <button
                        className="bg-red-500 text-white px-3 py-1 rounded hover:bg-red-600"
                        onClick={() => onRemove(id)}
                    >
                        Remove
                    </button>
                )}
            </div>
        </div>
    );
};
