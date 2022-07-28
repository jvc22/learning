import { useState } from "react"
import { Card } from "../components/Card"
import { Header } from "../components/Header"

function App() {
  interface Student {
    name: string;
    time: string;
  }

  const [studentName, setStudentName] = useState('');
  const [students, setStudents] = useState<Student[]>([]);

  function handleAddStudent() {
    const newStudent = {
        name: studentName,
        time: new Date().toLocaleTimeString("pt-br", {
            hour: '2-digit',
            minute: '2-digit',
            second: '2-digit',
        })
    };

    setStudents(prevState => [...prevState, newStudent]);
  } 

  return (
    <div>
      <Header />
      <div className="flex flex-col items-center w-full justify-center">
        <div className="flex flex-col items-center rounded h-[138px] w-[480px] mt-9 mb-9 border border-gray-500 bg-[#121214]"> 
          <span className="text-2xl mt-2">Registrar presença</span>
          <input type="text" 
                placeholder="Digite o nome..." 
                className="flex w-[410px] mt-2 mb-4 border py-0.5 bg-gray-900 px-2 border-none rounded"
                onChange={e => setStudentName(e.target.value)}
          />
          <button type="button"
                  className="border-none w-28 rounded p-1 uppercase bg-green-500 text-zinc-100 font-bold hover:bg-green-700 transition-colors" onClick={handleAddStudent}>
                  Adicionar
          </button>
        </div>
      </div>
      {
        students.map(student => <Card key={student.time} name={student.name} time={student.time}/>)
      }
      
      
    </div>
  )
}

export default App
