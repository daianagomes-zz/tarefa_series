set terminal pdfcairo 
set output "series_fourier.pdf"

set title "dados_sin3x.dat"
plot "dados_sin3x.dat" lw 4 lt 20
reset

set title "coeficientes_sin3x.dat"
set xrange[-0.2:0.2]
set yrange[-0.2:0.2]
plot "coeficientes_sin3x.dat" lw 2 
reset

set title "dados_sin5x.dat"
plot "dados_sin5x.dat" lw 4 lt 3
reset

set title "coeficientes_sin5x.dat"
set xrange[-0.2:0.2]
set yrange[-0.2:0.2]
plot "coeficientes_sin5x.dat" lw 4 lt 4
reset

set title "dados_soma1.dat"
plot "dados_soma1.dat" lw 4 lt 5
reset

set title "coeficientes_soma1.dat"
set xrange[-0.2:0.2]
set yrange[-0.2:0.2]
plot "coeficientes_soma1.dat" lw 4 lt 17
reset

set title "dados_produto.dat"
plot "dados_produto.dat" lw 4 lt 7
reset

set title "coeficientes_produto.dat"
set xrange[-0.2:0.2]
set yrange[-0.2:0.2]
plot "coeficientes_produto.dat" lw 4 lt 8
reset

set title "dados_aleatorios.dat"
plot "dados_aleatorios.dat" lw 4 lt 9
reset

set title "coeficientes_produto.dat"
set xrange[-0.2:0.2]
set yrange[-0.2:0.2]
plot "coeficientes_aleatorios.dat" lw 4 lt 10
reset


set title "dados_sin5xnx.dat"
plot "dados_sin5xnx.dat" lw 4 lt 11
reset

set title "coeficientes_sin5xnx.dat.dat"
set xrange[-0.2:0.2]
set yrange[-0.2:0.2]
plot "coeficientes_sin5xnx.dat" lw 4 lt 12
reset

set title "dados_sin5xnx.dat.dat"
plot "dados_sin5xnx.dat" lw 4 lt 13
reset

set title "coeficientes_soma2.dat"
set xrange[-0.2:0.2]
set yrange[-0.2:0.2]
plot "coeficientes_soma2.dat" lw 4 lt 23
reset

set title "dados_piano.dat"
plot "dados_piano.dat" lw 4 lt 2
reset

set title "coeficientes_piano.dat"
set xrange[-0.2:0.2]
set yrange[-0.2:0.2]
plot "coeficientes_piano.dat" lw 4 lt 21
reset

set output
