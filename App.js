import './App.css';
import Stack from '@mui/material/Stack';
import Button from '@mui/material/Button';
import {useState} from 'react'


function App() {

const [counter, setCounter] =useState(0);

const handleClick1 =()=>{
  setCounter(counter+1)
}
const handleClick2 =()=>{
  if(counter === 0){
    return 0;
  }
  else{
    setCounter(counter -1);
  }
}






  return (
    <div className="app">
      <div className='container'>
        <div className='total_amount_card' style={{backgroundImage: 'linear-gradient(to right, rgba(253, 230, 90, 100%), rgba(204, 254, 87, 100%))'}}>
            
            {/* <div className='right'>
              </div> */}

              
              <div className='card_text'>
                <h3 className='total_amount_heading'>1</h3>
              </div>
              
        </div>

         <form>

          <div className='button_collection'>

            <Stack spacing={2} direction="row">
              <Button onClick={handleClick1} variant="contained" className='btn_one'>+</Button>
              <Button onClick={handleClick2} variant="contained" className='btn-two'>-</Button>
              
            </Stack>

          </div>
         </form>





      </div>
    </div>
  );
}

export default App;
