import { shuffle } from "./utils";

export type Question = {
    question: string;
    category: string;
    correctAnswer: string;
    incorrectAnswer: string[];
    difficulty: string;
    type: string;
};

export type QuestionsState = Question & { answers: string[] };

export enum Difficulty {
    EASY = "Easy",
    MEDIUM = "Medium",
    HARD = "Hard",
}

export const fetchQuizQuestions = async (
    amount: number,
    difficulty: Difficulty,
): Promise<QuestionsState[]> => {
    const endpoint = `https://opentdb.com/api.php?amount=${amount}&difficulty=${difficulty.toLowerCase()}&type=multiple`;
    const data = await (await fetch(endpoint)).json();
    return data.results.map((question: Question) => ({
        ...question,
        answers: shuffle([...question.incorrectAnswer, question.correctAnswer]),
    }));
};
