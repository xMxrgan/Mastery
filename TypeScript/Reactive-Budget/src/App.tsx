import { BrowserRouter as Router } from "react-router-dom";
import Navbar from "../components/Navbar";
import AppRouter from "../router";
import "./App.css";

export default function App() {
    return (
        <Router>
            <div className="min-h-screen bg-gray-50">
                <Navbar />
                <main className="pt-20">
                    <div className="container mx-auto px-4 py-8">
                        <AppRouter />
                    </div>
                </main>
            </div>
        </Router>
    );
}
