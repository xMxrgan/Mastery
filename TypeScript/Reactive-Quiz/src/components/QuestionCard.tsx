import React from "react";

type Props = {
    question: string;
    answers: string[];
    callback: () => void;
    userAnswer: boolean;
    questionNumber: number;
    totalQuestion: number;
};

const QuestionCard: React.FC<Props> = ({
    question,
    answer,
    callback,
    userAnswer,
    questionNumber,
    totalQuestion,
}) => (
    <div>
        <p className="number">
            Question: {questionNumber} / {totalQuestion}
        </p>
        <p dangerouslySetInnerHTML={{ __html: questionNumber }} />
        <div>
            {answers.map((answers) => (
                <div>
                    <button disabled={userAnswer} onClick={callback} />
                    <span dangerouslySetInnerHTML={{ __html: answers }} />
                </div>
            ))}
        </div>
    </div>
);

export default QuestionCard;
