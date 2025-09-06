import Home from "../pages/Home";
import Navbar from "../components/Navbar";
import { BrowserRouter } from "react-router-dom";

export default function App() {
    return (
        <BrowserRouter>
            <Navbar />
            <Home />
        </BrowserRouter>
    );
}
