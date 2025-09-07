import { Link } from "react-router-dom";

export default function Navbar() {
    // Funzione per controllare se il link è attivo
    const isActive = (path: string) => location.pathname === path;

    // Gestione click logo
    const handleLogoClick = () => {
        // Se già in home, ricarica la pagina, altrimenti naviga
        if (location.pathname === "/") {
            window.location.reload();
        } else {
            window.location.href = "/";
        }
    };

    return (
        <nav className="fixed top-0 left-0 w-full bg-white shadow-md z-50">
            <div className="flex items-center justify-between px-6 py-4 max-w-screen-xl mx-auto">
                {/* LOGO - Button corretto */}
                <button
                    className="text-2xl font-bold text-blue-600 hover:text-blue-800 transition-colors duration-200"
                    onClick={handleLogoClick}
                    // ↑ Corretto: funzione che gestisce il click, non il componente App
                >
                    LOGO
                </button>

                {/* TITLE - Può essere un link o solo testo */}
                <div className="text-xl font-semibold text-gray-800">TITLE</div>

                {/* NAVIGATION LINKS */}
                <div className="flex space-x-6">
                    <Link
                        to="/"
                        className={`px-3 py-2 rounded-md transition-colors duration-200 ${
                            isActive("/")
                                ? "bg-blue-100 text-blue-700 font-semibold"
                                : "text-gray-600 hover:text-blue-600 hover:bg-gray-100"
                        }`}
                    >
                        Home
                    </Link>

                    <Link
                        to="/profile"
                        // ↑ Corretto: "/" prima del path
                        className={`px-3 py-2 rounded-md transition-colors duration-200 ${
                            isActive("/profile")
                                ? "bg-blue-100 text-blue-700 font-semibold"
                                : "text-gray-600 hover:text-blue-600 hover:bg-gray-100"
                        }`}
                    >
                        Profile
                    </Link>
                </div>
            </div>
        </nav>
    );
}
