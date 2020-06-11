echo "> Clearing old header file."
ls ../ &&
rm ../h.h
python3 output_header.py > ../h.h
echo "> Packed code to single file"
