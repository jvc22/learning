interface studentProps {
    name: string;
    time: string;
}

export function Card(props: studentProps) {
    return(
        <div className="flex w-full justify-center">
            <div className="flex items-center justify-between h-12 w-[380px] bg-gray-600 rounded mb-5 p-4 border-2 border-violet-500">
                <span className="font-bold">{props.name}</span>
                <small>{props.time}</small>
            </div>
        </div>
    )
}