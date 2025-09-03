const Square = ({ value }: { value: any }) => {
  return <button>{value}</button>;
};

const TicTacToe = () => {
  return (
    <div className="tic-tac-toe-container">
      <div className="row">
        <Square value={null} />
      </div>
      <div className="row"></div>
      <div className="row"></div>
    </div>
  );
};

export default TicTacToe;
