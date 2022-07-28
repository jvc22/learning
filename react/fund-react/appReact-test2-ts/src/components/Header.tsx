import { Logo } from "./Logo";

export function Header() {
    return(
        <div>
            <header className="w-full py-2 flex justify-center items-center bg-[#121214] text-4xl border-b border-gray-600 text-zinc-100 flex-1 gap-5">
                Lista de Presença
                <Logo />
            </header>
        </div>
    )
}