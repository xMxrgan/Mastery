import { useState } from "react";

import type React from "react";
import QuestionCard from "./components/QuestionCard";
import { fetchQuizQuestions, type QuestionsState } from "./API";
import { Question, Difficulty } from "./API";
import "./App.css";

type AnswerObject = {
  question: string;
  userAnswer: string;
  correct: boolean;
  correctAnswer: string;
};

const TOTAL_QUESTIONS = 10;

const App = () => {
  const [loading, setLoading] = useState(false);
  const [question, setQuestion] = useState([]);
  const [number, setNumber] = useState(0);
  const [userAnswer, setUserAnswer] = useState<QuestionsState>([]);
  const [score, setScore] = useState(0);
  const [gameOver, setGameOver] = useState(false);

  console.log(fetchQuizQuestions(TOTAL_QUESTIONS, Difficulty.EASY));

  const startTrivia = async () => {};
  const newQuestion = await(
    fetchQuizQuestions(TOTAL_QUESTIONS, Difficulty.EASY)
  );
  setQuestion(newQuestion);
  setScore(0);
  setUserAnswer([]);
  setNumber(0);
  setLoading(false);
  const checkAnswer = (e: React.MouseEvent<HTMLButtonElement>) => {};
  const nextQuestion = () => {};

  return (
    <div className="App">
      <h1>REACT QUIZ</h1>
      <button className="startButton" onClick={startTrivia}>
        Start
      </button>
      <p className="score">Score:</p>
      <p>Loading questions...</p>
      {/*
            <QuestionCard
                questionNumber={number + 1}
                totalQuestion={TOTAL_QUESTIONS}
                question={question[number].question}
                answers={question[number].answers}
                userAnswer={userAnswer ? userAnswer[number] : undefined}
            />
            */}

      <button className="nextQuestion" onClick={nextQuestion}>
        Next question
      </button>
    </div>
  );
};

export default App;
